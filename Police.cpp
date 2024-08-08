#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int events[n];

    for (int i = 0; i < n; i++) {
        cin >> events[i];
    }

    int police = 0;
    int untreated_crimes = 0;

    for (int i = 0; i < n; i++) {
        if (events[i] == -1) {
            if (police > 0) {
                police--;
            } else {
                untreated_crimes++;
            }
        } else {
            police += events[i];
        }
    }

    cout << untreated_crimes << endl;

    return 0;
}
