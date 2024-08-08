#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(20);
    s.insert(10);
    s.insert(40);
    auto it = s.find(20);
    if(nt!=s.end()){
        cout<<"The key is found"<<endl;
    }else{
        cout<<"The key is not found"<<endl;
    }
}