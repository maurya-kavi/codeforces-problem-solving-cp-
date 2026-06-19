#include <bits/stdc++.h>
using namespace std;
 
// macros
#define ll long long
#define yes cout << "YES
"
#define no cout << "NO
"
#define f(i, size) for (int i = 0; i < size; i++)
#define iv(v, n)     \
    vector<ll> v(n); \
    f(i, n) cin >> v[i]
 
#define INF 1000000000000000000LL
#define mp make_pair
#define mt make_tuple
#define nline '
'
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<pair<int, int>>
 
void solve()
{
    ll n, k;
    cin >> n >> k;
    
    iv(a, n);
    vector<ll> c(n + 1, 0);
    f(i, n) {
        c[a[i]]++;
    }
 
    vector<bool> L(n + 1, false);
    ll active_trues = 0;
 
    for (ll i = n; i >= 1; i--) {
        if (c[i] > 0) {
            if (active_trues > 0) {
                L[i] = false;
            } else {
                L[i] = (c[i] % 2 != 0);
            }
        }
 
        if (c[i] > 0 && L[i]) {
            active_trues++;
        }
 
        if (i + k <= n) {
            ll out = i + k;
            if (c[out] > 0 && L[out]) {
                active_trues--;
            }
        }
    }
 
    bool can_win = false;
    for (ll i = 1; i <= n; i++) {
        if (c[i] > 0 && !L[i]) {
            can_win = true;
            break;
        }
    }
 
    if (can_win) yes;
    else no;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}