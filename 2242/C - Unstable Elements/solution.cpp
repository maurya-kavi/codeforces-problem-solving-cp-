#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    ll k;
    if (!(cin >> n >> k)) return;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<ll> c;
    int w = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] == a[i-1]) {
            w++;
        } else {
            c.push_back(w);
            w = 1;
        }
    }
    c.push_back(w);
    sort(c.begin(), c.end());
    int m = c.size();
    vector<ll> s(m + 1, 0);
    for (int i = m - 1; i >= 0; --i) {
        s[i] = s[i+1] + c[i];
    }
    ll ans = 0;
    for (int i = 0; i < m; ++i) {
        if (i > 0 && c[i] == c[i-1]) continue;
        ll u = c[i];
        ll z = m - i;
        ll v = s[i];
        if ((k - v) % z == 0) {
            ll d = (k - v) / z;
            if (d >= 1 - u) {
                ans++;
            }
        }
    }
    cout << ans << "
";
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