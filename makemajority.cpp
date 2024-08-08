#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string arr;
        cin >> arr;
        if (n == 1) {
            if (arr[0] == '1') {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            continue;
        }
        if (n == 2) {
            if (arr[0] != arr[1]) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
            continue;
        }
        if (arr[0] == '1' || arr[n - 1] == '1') {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
