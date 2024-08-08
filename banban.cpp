#include<iostream>
using namespace std;
int solve(){
    int n;
    cin>>n;
    int firstB=1,lastA=3*n-1;
    cout<<(n+1)/2<<endl;
    while(lastA>firstB){
        cout<<firstB<<" "<<lastA<<endl;
        firstB+=3;
        lastA-=3;
    }
    return 0;
}
int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}