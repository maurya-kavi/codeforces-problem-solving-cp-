#include <bits/stdc++.h>
using namespace std;
 
// macros
#define ll long long
#define yes cout << "YES
"
#define no cout << "NO
"
#define f(i, size) for (int i = 0; i < size; i++)
#define iv(v, n) vector<ll> v(n); f(i, n) cin >> v[i]
 
#define INF 1000000000000000000LL
#define mp make_pair
#define mt make_tuple
#define nline '
'
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<pair<int, int>>
 
void solve() {
    ll n;
    cin >> n;
    iv(a, n);
    iv(b, n);
 
    if (n == 1) {
        cout << min(a[0], b[0]) << nline;
        return;
    }
 
    auto check = [&](int x) {
        int twos = 0, zeros = 0;
        bool in_zero = false;
        
        f(i, n) {
            int c = (a[i] >= x) + (b[i] >= x);
            if (c == 2) {
                twos++;
                in_zero = false; 
            } else if (c == 0) {
                if (!in_zero) {
                    zeros++;
                    in_zero = true;
                }
            }
        }
        return twos > zeros;
    };
 
    int l = 1, r = 2 * n, ans = 1;
    
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (check(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    
    cout << ans << nline;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}