#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        string c = a; 
        string d = b; 
        c[0] = b[0];
        d[0] = a[0];
        
        cout << c << " " << d << endl;
    }
    return 0;
}
