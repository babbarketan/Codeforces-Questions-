#include <iostream>
#include <algorithm>
using namespace std;

int luckiness(int n) {
    int maxDigit = 0;
    int minDigit = 9;
    while (n > 0) {
        int digit = n % 10;
        maxDigit = max(maxDigit, digit);
        minDigit = min(minDigit, digit);
        n /= 10;
    }
    return maxDigit - minDigit;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        
        int maxLuckiness = -1;
        int luckiestNumber = l;
        
        for (int i = l; i <= r; ++i) {
            int currentLuckiness = luckiness(i);
            if (currentLuckiness > maxLuckiness) {
                maxLuckiness = currentLuckiness;
                luckiestNumber = i;
            }
        }
        
        cout << luckiestNumber << endl;
    }
    
    return 0;
}
