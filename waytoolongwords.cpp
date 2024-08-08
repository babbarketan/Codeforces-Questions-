#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    string s;

    while(t--){
        cin >> s;
        if(s.size() <= 10){
            cout << s << endl;
        } else {
            int n = s.size() - 2;
            string ans = s[0] + to_string(n) + s.back();
            cout << ans << endl;
        }
    }

    return 0;
}
