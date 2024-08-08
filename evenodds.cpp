#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> ans;
    int j=1;
    while(j<n){
        if(j%2!=0){
          ans.push_back(j);
        }
        j++;
    }
    int i = 1;
    while(i<=n){
        if(n%2==0){
         ans.push_back(i);
        }
        i++;
    }
    if(k==n){
        cout<<ans.back();
    }
    else{
        cout<<ans[k-1];
    }
}