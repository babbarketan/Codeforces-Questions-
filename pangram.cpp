#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    set<int> sk;
    for(int i=0;i<n;i++){
        sk.insert(tolower(s[i]));
    }

    if(sk.size()== 26){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}