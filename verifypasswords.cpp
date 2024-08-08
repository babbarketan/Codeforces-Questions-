#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is_sorted_and_no_digit_after_letter(const string& s) {
    string digits, letters;
    for (char c : s) {
        if (isdigit(c))
            digits += c;
        else
            letters += c;
    }
    
    if (!is_sorted(digits.begin(), digits.end()) || !is_sorted(letters.begin(), letters.end()))
        return false;
    
    if (!letters.empty() && !digits.empty() && letters.back() > digits.front())
        return false;
    
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        if (is_sorted_and_no_digit_after_letter(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
