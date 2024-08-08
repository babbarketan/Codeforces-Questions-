#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(const string& s) {
    int i = 0;
    int j = s.size() - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;

        if (k > 0) {
            if (k > s.size()) {
                k = s.size();
            }
            s.erase(s.begin(), s.begin() + k);
        }

        if (checkPalindrome(s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
