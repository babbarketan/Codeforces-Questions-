#include <iostream>
#include <algorithm>
using namespace std;
bool doIntersect(int a, int b, int c, int d) {
    if (a > b) swap(a, b);
    if (c > d) swap(c, d);
    if ((c > a && c < b) && (d > a && d < b)) {
        return false;
    }

    if ((a > c && a < d) && (b > c && b < d)) {
        return false;
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (doIntersect(a, b, c, d)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
