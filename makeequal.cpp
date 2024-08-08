#include <bits/stdc++.h>
using namespace std;

pair<int, int> fgai(const vector<int>& arr, int n) {
    int maxi = INT_MIN;
    int indi = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > maxi) {
            maxi = arr[i];
            indi = i;
        }
    }
    return {maxi, indi};
}

pair<int, int> lgai(const vector<int>& arr, int n) {
    int lowi = INT_MAX;
    int inli = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < lowi) { // Correcting to find minimum
            lowi = arr[i];
            inli = i;
        }
    }
    return {lowi, inli};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        unordered_map<int, int> mp;
        
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        
        if (n == 1) {
            cout << "YES" << endl;
            continue;
        }
        
        if (n == 2) {
            if (arr[0] == arr[1]) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            continue;
        }
        
        bool possible = true;
        while (mp.size() > 1) {
            pair<int, int> max_pair = fgai(arr, n);
            pair<int, int> min_pair = lgai(arr, n);
            
            int max_val = max_pair.first;
            int max_ind = max_pair.second;
            int min_val = min_pair.first;
            int min_ind = min_pair.second;
            
            if (max_val == min_val) {
                break;
            }
            
            int new_max_val = max_val - 1;
            int new_min_val = min_val + max_val;
            
            // Update the map
            mp[new_max_val]++;
            mp[new_min_val]++;
            
            if (--mp[max_val] == 0) {
                mp.erase(max_val);
            }
            if (--mp[min_val] == 0) {
                mp.erase(min_val);
            }
            
            // Update the array
            arr[max_ind] = new_max_val;
            arr[min_ind] = new_min_val;
        }
        
        if (mp.size() == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
