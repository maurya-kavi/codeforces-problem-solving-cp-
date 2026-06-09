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
    ll n,x,y,z;
    cin >> n >> x >> y >> z;
    ll t1 = (n + x + y - 1) / (x + y);
    ll t2;
    if (x * z >= n) 
    {
        t2 = (n + x - 1) / x;
    } 
    else 
    {
        ll r = n - (x * z);
        ll cs = x + 10 * y;
        t2 = z + (r + cs - 1) / cs;
    }
 
    cout << min(t1, t2) << nline;
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