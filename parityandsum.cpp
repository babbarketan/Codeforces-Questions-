#include <bits/stdc++.h>
using namespace std;

int checkparity(const vector<int>& a, int n) {
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            odd++;
        } else {
            even++;
        }
    }
    return (even == 0 || odd == 0) ? 0 : 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(a.begin(),a.end());  
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = 0; 
        while(checkparity(a, n) != 0) {
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if ((a[i] % 2 == 0 && a[j] % 2 != 0) || (a[i] % 2 != 0 && a[j] % 2 == 0)) {
                        if (a[i] < a[j]) {
                            a[i] += a[j];
                        } else {
                            a[j] += a[i];
                        }
                        ans++;
                        goto endloop; 
                    }
                }
            }
            endloop:; 
        }
        int e = 0;
        int O = 0;
        for(int i=0;i<n;i++){
            if(b[i]%2==0){
                e++;
            }else{
                O++;
            }
        }
        if(e==O && e!=0 && O!=0){
            ans = ans - 1;
        }
        cout << ans << endl;
    }
}
