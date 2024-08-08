#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string ans = "NO";
    for(int i=0;i<s.size();i++){
        if(s[i]=='H' || s[i] == 'Q' || s[i] == '9' || s[i] =='+'){
            ans = "YES";
            break;
        }
    }
   cout<<ans;
}