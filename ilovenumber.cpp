#include <iostream>
#include <vector>

using namespace std;

int countAmazingPerformances(int n, const vector<int>& points) {
    if (n <= 1) return 0;
    
    int amazingCount = 0;
    int best = points[0];
    int worst = points[0];
    
    for (int i = 1; i < n; ++i) {
        if (points[i] > best) {
            amazingCount++;
            best = points[i];
        } else if (points[i] < worst) {
            amazingCount++;
            worst = points[i];
        }
    }
    
    return amazingCount;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> points(n);
    for (int i = 0; i < n; ++i) {
        cin >> points[i];
    }
    
    cout << countAmazingPerformances(n, points) << endl;
    
    return 0;
}
