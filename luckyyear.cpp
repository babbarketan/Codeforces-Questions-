#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int z = n;
    int digit = 0;
    int last;
    int r;
    while(n>0){
        r = n%10;
        digit++;
        n = n/10;
    }
    cout<<(r+1)*pow(10,digit-1)-z;
}