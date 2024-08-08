#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int doesThereExist(int n, int k, string &s) {
    if (k == 1) {
        return 0;
    }

    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }

    if (mp.size() == 1) {
        return 0;
    }

    for (int i = 0; i < n - 1; i++) {
        if (s[i] > s[i + 1]) {
            return 1;
        }
    }
    
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        cout << doesThereExist(n, k, s) << endl;
    }
    return 0;
}

/*
2
3 1
aaa
4 4
cdab
*/

