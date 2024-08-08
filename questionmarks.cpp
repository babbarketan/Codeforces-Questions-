#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
       }
       int cnt = 0;
       for(auto it: mp){
          if(it.second>=n){
              cnt++;
          }
       }
       cout<<cnt*n<<endl;
    }
}