#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int a, b, c, d;

    while (t--) {
        cin >> a >> b >> c >> d;

        // Ensure a < b and c < d for simplicity
        if (a > b) swap(a, b);
        if (c > d) swap(c, d);

        string ans = "YES";
        int cnt = 0;

        // Count how many of c and d are between a and b
        for (int i = a + 1; i <= b - 1; ++i) {
            int wrapped_i = (i - 1) % 12 + 1; // Handle wrapping around the clock
            if (wrapped_i == c || wrapped_i == d) {
                cnt++;
            }
        }

        if (cnt == 2) {
            ans = "NO";
        }

        // Reset count for the other half of the circle
        cnt = 0;
        for (int i = b + 1; i <= 12 + a; ++i) {
            int wrapped_i = (i - 1) % 12 + 1; // Handle wrapping around the clock
            if (wrapped_i == c || wrapped_i == d) {
                cnt++;
            }
        }

        if (cnt == 2) {
            ans = "NO";
        }

        cout << ans << endl;
    }

    return 0;
}


15
2 9 10 6
3 8 9 1
1 2 3 4
5 3 4 12
1 8 2 10
3 12 11 8
9 10 12 1
12 1 10 2
3 12 6 9
1 9 8 4
6 7 9 12
7 12 9 6
10 12 11 1
3 9 6 12
1 4 3 5



YES
NO
NO
YES
YES
NO
NO
NO
NO
NO
NO
YES
YES
YES
YES

