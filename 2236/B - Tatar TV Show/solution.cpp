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
    string s;
    cin >> s;
 
    vector<ll> c(k, 0);
    
    f(i, n) {
        if (s[i] == '1') {
            c[i % k]++;
        }
    }
 
    f(i, k) {
        if (c[i] % 2 != 0) {
            no;
            return;
        }
    }
    
    yes;
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