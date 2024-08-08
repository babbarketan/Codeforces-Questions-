#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    vector<int> arr(n);
    while(t--){
        cin>>n;
        int op = -1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==1){
           cout<<1<<endl;
           cout<<arr[0]<<endl;
        }
    }
}