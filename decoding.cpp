#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string original_str;
    cin>>n>>original_str;
    string encoded;
    int sz = n;
    int left = 0;
    int right = 0;
    int mid = sz/2;
    while(n){
        if(n % 2 != 0){
            encoded+=original_str[mid+right];
            right += 1;
        } else {
            encoded += original_str[mid-1-left];
            left+=1;
        }
        n -= 1;
    }
    cout<<encoded;
}
