#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n), p1(n, 0), p2(n, 0), p3(n, 0), v(n, 0);
 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        
        if (i > 0) {
            p1[i] = p1[i - 1];
            p2[i] = p2[i - 1];
            p3[i] = p3[i - 1];
        }
        
        if (a[i] == 1) p1[i]++;
        else if (a[i] == 2) p2[i]++;
        else if (a[i] == 3) p3[i]++;
 
        v[i] = p1[i] + p2[i] - p3[i];
    }
 
    bool ok = false;
    int mx = -1e9;
 
    for (int i = n - 3; i >= 0; --i) {
        mx = max(mx, v[i + 1]);
        if (p1[i] >= p2[i] + p3[i] && mx >= v[i]) {
            ok = true;
            break;
        }
    }
 
    if (ok) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}