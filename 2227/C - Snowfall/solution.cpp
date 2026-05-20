#include <bits/stdc++.h>
using namespace std;
 
// macros
#define ll long long
#define yes cout << "YES
"
#define no cout << "NO
"
#define f(i, size) for (int i = 0; i < size; i++)
// #define ia(a, n) \
//     int a[n];     \
//     f(i, n) cin >> a[i]
 
#define iv(v, n)     \
    vector<ll> v(n); \
    f(i, n) cin >> v[i]
 
// #define M (1000000007)
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
    int n;
    cin >> n;
    vector<ll> two, three, both, none;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        bool div2 = (x % 2 == 0);
        bool div3 = (x % 3 == 0);
        if (div2 && div3)
            both.push_back(x);
        else if (div2)
            two.push_back(x);
        else if (div3)
            three.push_back(x);
        else
            none.push_back(x);
    }
    vector<ll> ans;
    for (auto x : two)
        ans.push_back(x);
    for (auto x : none)
        ans.push_back(x);
    for (auto x : three)
        ans.push_back(x);
    for (auto x : both)
        ans.push_back(x);
    for (auto x : ans)
        cout << x << " ";
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