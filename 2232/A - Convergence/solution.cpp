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
    int sixseven;
    cin >> sixseven;
    vector<int> v(sixseven);
    for (int &i : v)
        cin >> i;
    
    sort(v.begin(), v.end());
    int r = 2e9;
    for (int i = 0, j; i < sixseven; i = j)
    {
        j = i;
        while (j < sixseven && v[j] == v[i])
            j++;
        r = min(r, max(i, sixseven - j));
    }
    cout << r << nline;
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