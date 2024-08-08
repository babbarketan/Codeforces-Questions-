#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int l,r;
    while(t--){
        cin>>l>>r;
        int maxluck = 0;
        int ans = l;
        for(int i=l;i<=r;i++){
            string num = to_string(i);
            sort(num.begin(),num.end());
            int curr = num[num.length()-1]-num[0];
            if(curr>maxluck){
                maxluck = curr;
                ans = i;
            }
            if(maxluck==9){
                break;
            }
        }
        cout<<ans<<endl;
    }
}