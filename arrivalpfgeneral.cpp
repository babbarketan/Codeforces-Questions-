#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> heights_set;
    vector<int> heights(n);

    for (int i = 0; i < n; i++) {
        int height;
        cin >> height;
        heights_set.insert(height);
        heights[i] = height;
    }

    int max_height = *heights_set.rbegin();
    int min_height = *heights_set.begin();
    int max_index = -1;
    int min_index = -1;

    for (int i = 0; i < n; i++) {
        if (heights[i] == max_height) {
            max_index = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (heights[i] == min_height) {
            min_index = i;
            break;
        }
    }

    int swaps = 0;
    swaps += max_index;
    swaps += (n - 1 - min_index);

    if (max_index > min_index) {
        swaps--;
    }

    cout << swaps << endl;

    return 0;
}
