#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int x = 0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(abs(a[i])-b[x]<=k){
                ans.push_back(b[x]);
                x++;B
            }else{
                x++;
                if(x>n){
                    break;
                }
            }
        }
    }
}