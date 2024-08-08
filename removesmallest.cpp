#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int i = arr.size() - 1;
        while (arr.size() > 1 && i > 0) {
            int sb = arr[i] - arr[i - 1];
            if (sb == 1) {
                if (arr[i] < arr[i - 1]) {
                    arr.erase(arr.begin() + i);
                } else {
                    arr.erase(arr.begin() + (i - 1));
                }
                i = arr.size() - 1;
            } else if (sb == 0) {
                arr.erase(arr.begin() + i);
                i = arr.size() - 1;
            } else {
                i--;
            }
        }

        if (arr.size() == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
