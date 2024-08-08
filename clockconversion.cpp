#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

const int MOD = 1e9 + 7;

using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int med_index = k / 2;
        long long sum = 0;
        
        vector<int> count_1(n + 1, 0);
        vector<int> count_0(n + 1, 0);
        
        for (int i = 0; i < n; ++i) {
            count_1[i + 1] = count_1[i] + (a[i] == 1 ? 1 : 0);
            count_0[i + 1] = count_0[i] + (a[i] == 0 ? 1 : 0);
        }
        
        for (int i = 0; i <= n - k; ++i) {
            int ones_in_window = count_1[i + k] - count_1[i];
            int zeros_in_window = count_0[i + k] - count_0[i];
            
            if (ones_in_window > med_index) {
                sum = (sum + 1) % MOD;
            }
        }
        
        cout << sum << "\n";
    }
    
    return 0;
}
