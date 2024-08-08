#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s,e,a,l;
    cin>>n>>s>>e>>a>>l;
    if(n==s){
        cout<<1;
    }
    int days = 0;
    while(s<n){
        s = s + a - l;
        days++; 
    }
    cout<<days;
}