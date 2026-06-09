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
    ll n;
    cin >> n;
    if (n == 2)
    {
        cout << "1 2 1 1 2 2 1 2" << nline;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << " " << i << " ";
    }
 
    if (n % 2 == 0)
    {
        for (int i = 1; i <= n; i += 2)
        {
            cout << i << " " << i + 1 << " " << i << " " << i + 1 << " ";
        }
    }
    else
    {
        for (int i = 1; i <= n - 3; i += 2)
        {
            cout << i << " " << i + 1 << " " << i << " " << i + 1 << " ";
        }
        
        int a = n - 2;
        int b = n - 1;
        int c = n;
        cout << a << " " << b << " " << a << " " << c << " " << b << " " << c << " ";
    }
    cout << nline;
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