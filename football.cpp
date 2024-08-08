#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.length()<7){
        cout<<"NO";
        return;
    }
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]==s[i+2]==s[i+3]==s[i+4]==s[i+5]==s[i+6] == 1 || s[i]==s[i+1]==s[i+2]==s[i+3]==s[i+4]==s[i+5]==s[i+6] == 0){
            
        }
    }
}