#include<bits/stdc++.h>
using namespace std;
pair<int,int> fgai(vector<int> arr,int n){
      int maxi = INT_MIN;
      int indi = -1;
      for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
            indi = i;
        }
      }
    return {maxi,indi};
}
pair<int,int> lgai(vector<int> arr,int n){
      int lowi = INT_MAX;
      int inli = -1;
      for(int i=0;i<n;i++){
        if(arr[i]>lowi){
            lowi = arr[i];
            inli = i;
        }
      }
    return {lowi,inli};
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==1) cout<<"YES"<<endl;
        else if(n==2){
            if(arr[0]!=arr[1]){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
        else{
            unordered_map<int,int> mp;
            for(int i=0;i<n;i++){
                mp[arr[i]]++;
            }
           while(mp.size()!=1){
                int ele = fgai(arr,n).first;
                int ind = fgai(arr,n).second;
                int elel = lgai(arr,n).first;
                int inl = lgai(arr,n).second;
                elel = elel+ele;
                ele = ele-1;
                mp[elel]++;
                mp[ele]--;
                arr[ind] = ele;
                arr[inl] = elel;
           }
           if(mp.size()==1){
            cout<<"YES"<<endl;
           }
           else{
            cout<<"NO"<<endl;
           }
        }
    }
}