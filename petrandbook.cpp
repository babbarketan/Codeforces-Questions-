#include <iostream>
using namespace std;

int main() {
    int pages;
    cin >> pages;
    
    int daily[7];
    for (int i = 0; i < 7; i++) {
        cin >> daily[i];
    }

    int sm = 0;
    int day = 0;
    
    while (sm < pages) {
        sm += daily[day];
        day = (day + 1) % 7;
    }
    
    cout << (day == 0 ? 7 : day);
    return 0;
}
