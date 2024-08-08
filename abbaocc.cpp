#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        int cnt = 0;
        cnt += min(mp['A'], n);
        cnt += min(mp['B'], n);
        cnt += min(mp['C'], n);
        cnt += min(mp['D'], n);

        cout << cnt << endl;
    }
    return 0;
}
