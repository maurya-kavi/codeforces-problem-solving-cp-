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
    ll a, b, x;
    cin >> a >> b >> x;
 
    vector<pll> sa, sb;
    
    ll ca = a, oa = 0;
    while (true)
    {
        sa.pb({ca, oa});
        if (ca == 0)
            break;
        ca /= x;
        oa++;
    }
 
    ll cb = b, ob = 0;
    while (true)
    {
        sb.pb({cb, ob});
        if (cb == 0)
            break;
        cb /= x;
        ob++;
    }
 
    ll ans = INF;
    for (auto &pa : sa)
    {
        for (auto &pb : sb)
        {
            ans = min(ans, pa.second + pb.second + abs(pa.first - pb.first));
        }
    }
    
    cout << ans << nline;
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