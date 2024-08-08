#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    char s;

    while (t--) {
        cin >> s;
        string a = "codeforces";

        if (a.find(s) != string::npos) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
