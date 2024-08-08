#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()==1){
            s+='w';
            reverse(s.begin(),s.end());
            cout<<s;
        }
        for(int i=1;i<s.size()-2;i++){
            if(s[i]==s[i+1] && s[i+1]!=s[i+2] || s[i]!=s[i-1]){
                s+=s[i];
                s+='w';
                s+=s[i+1];
            }
        }
    }
}