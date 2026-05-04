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
    string s;
    cin >> s;
 
    int sum = 0;
    for (char c : s) sum += (c - '0');
 
    if (sum <= 9) {
        cout << 0 << nline;
        return;
    }
 
    vector<int> reductions;
 
    for (int i = 0; i < s.size(); i++) {
        int d = s[i] - '0';
        if (i == 0) {
            reductions.push_back(d - 1); 
        } else {
            reductions.push_back(d);    
        }
    }
 
    sort(reductions.rbegin(), reductions.rend());
 
    int need = sum - 9;
    int ops = 0;
 
    for (int r : reductions) {
        need -= r;
        ops++;
        if (need <= 0) break;
    }
 
    cout << ops << nline;
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