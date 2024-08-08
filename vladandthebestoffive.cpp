#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int max = INT_MIN;
        char z;
        for(auto it: mp){
            if(it.second>max){
               max = it.second;
               z = it.first;
            }
        }
        cout<<z<<endl;
    }
}

/*
8
ABABB
ABABA
BBBAB
AAAAA
BBBBB
BABAA
AAAAB
BAAAA
*/

/*
B
A
B
A
B
A
A
A

*/