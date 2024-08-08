#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int b = t;
    double sm = 0;
    double a;
    while(t--){
       cin>>a;
       sm += a/b;
    }
    cout<<setprecision(11)<<sm;
}