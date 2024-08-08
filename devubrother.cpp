#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> a(n);
    vector<int> b(m);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int mini = a[0];
    int maxi = b[m-1];
    if(n==m){
        cout<<maxi-mini<<endl;
    }
    else if(mini >= maxi && n!=m) {
        cout << 0 << endl;
      
    } else {
        cout << (maxi - mini) + 1 << endl;
    }
    return 0;
}
