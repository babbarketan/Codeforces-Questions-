#include<bits/stdc++.h>
using namespace std;
void solve(long long tc){
    long long n,k;
    cin>>n>>k;
 
    string s;
    cin>>s;
 
    map<char,long long> mp;
    for(auto ch:s){
      mp[ch]++;
    }
 
    long long even = 0, odd = 0;
 
    for(auto el:mp){
      even += (el.second%2 == 0);
      odd += (el.second%2 != 0);
    }  
 
    if(k < odd-1){
      cout<<"NO"<<endl;
      return;
    }
 
    cout<<"YES"<<endl;
}
 
int main() {
    long long tt;
    cin>>tt;
    for(long long i=1;i<=tt;i++){
        solve(i);
    }
 
    return 0;
}