#include <iostream>
#include <unordered_map>
#include <string>
#include <climits>

using namespace std;

int shortestPath(int n, string &s) {
    // Check if all 'R', 'G', 'B' are present in the string
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }
    if (mp['R'] == 0 || mp['G'] == 0 || mp['B'] == 0) {
        return -1;
    }

    // Initialize the minimum path length to a large value
    int minPathLength = INT_MAX;

    // Iterate from each starting position
    for (int i = 0; i < n; i++) {
        bool visitr = false;
        bool visitg = false;
        bool visitb = false;
        int cnt = 0;

        for (int j = i; j < n; j++) {
            if (s[j] == 'R') visitr = true;
            if (s[j] == 'G') visitg = true;
            if (s[j] == 'B') visitb = true;

            cnt++;

            if (visitr && visitg && visitb) {
                minPathLength = min(minPathLength, cnt);
                break;
            }
        }
    }

    return minPathLength;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << shortestPath(n, s) << endl;
    }
    return 0;
}
