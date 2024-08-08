#include <bits/stdc++.h>
using namespace std;

int main() {
        long long n, m, a;
        cin >> n >> m >> a;
        long long tiles_along_length = n / a + (n % a != 0);
        long long tiles_along_width = m / a + (m % a != 0);
        cout << tiles_along_length * tiles_along_width << endl;
    return 0;
}
