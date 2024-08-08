#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            cin >> b[i];
        }

        // Initialize the array `a` with the values from `b`
        vector<int> a(n);
        a[0] = b[0];
        bool possible = true;

        for (int i = 1; i < n - 1; ++i) {
            if ((b[i - 1] & b[i]) == b[i]) {
                a[i] = b[i];
            } else {
                possible = false;
                break;
            }
        }

        // Assign the last element of `a`
        a[n - 1] = b[n - 2];

        if (possible) {
            for (int i = 0; i < n; ++i) {
                cout << a[i] << " ";
            }
            cout << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
}

int main() {
    solve();
    return 0;
}
