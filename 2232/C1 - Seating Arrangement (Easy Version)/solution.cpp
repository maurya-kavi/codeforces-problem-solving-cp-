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
    int n, x, s;
    cin >> n >> x >> s;
 
    string str;
    cin >> str;
 
    vector<long long> dp(x + 1, -1);
    dp[0] = 0;
 
    for (char ch : str) {
        vector<long long> ndp = dp;
 
        for (int tables = 0; tables <= x; tables++) {
            if (dp[tables] == -1) continue;
 
            if (ch == 'I') {
                if (tables < x) {
                    ndp[tables + 1] =
                        max(ndp[tables + 1], dp[tables] + 1);
                }
            }
            else if (ch == 'E') {
                if (dp[tables] < 1LL * tables * s) {
                    ndp[tables] =
                        max(ndp[tables], dp[tables] + 1);
                }
            }
            else { 
                if (tables < x) {
                    ndp[tables + 1] =
                        max(ndp[tables + 1], dp[tables] + 1);
                }
 
                if (dp[tables] < 1LL * tables * s) {
                    ndp[tables] =
                        max(ndp[tables], dp[tables] + 1);
                }
            }
        }
 
        dp = ndp;
    }
 
    long long ans = 0;
    for (auto val : dp) {
        ans = max(ans, val);
    }
 
    cout << ans << '
';
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