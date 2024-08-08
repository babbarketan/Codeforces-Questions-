#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> timeSlots(7, 0);
    
    for (int i = 0; i < n; ++i) {
        string schedule;
        cin >> schedule;
        for (int j = 0; j < 7; ++j) {
            if (schedule[j] == '1') {
                timeSlots[j]++;
            }
        }
    }
    
    int maxRoomsNeeded = *max_element(timeSlots.begin(), timeSlots.end());
    cout << maxRoomsNeeded << endl;
    
    return 0;
}
