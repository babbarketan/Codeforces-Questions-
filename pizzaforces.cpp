#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long n;
    while(t--){
        cin>>n;
        long long a = (n+1)/2*5;
        long long ans = max(a,15long long);
        cout<<ans<<endl;
    }
}