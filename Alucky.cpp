#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    int fs = 0;
    int ls = 0;
    while(t--){
      cin>>s;
      fs = (s[0]-'0')+(s[1]-'0')+(s[2]-'0');
      int n = s.size();
      ls =(s[n-1]-'0')+(s[n-2]-'0')+(s[n-3]-'0');
      if(fs==ls){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
}