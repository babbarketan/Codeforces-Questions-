#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
       for(int i=0;i<n;i++){
          cin>>arr[i];
       }
      sort(arr.begin(),arr.end());
      int cnt = 0;
      for(int i=0;i<arr.size()-1;i++){
        while(arr[i]!=arr[n-1]){
            arr[i]++;
            cnt++;
        }
      }
      cout<<cnt;
    return 0;
}