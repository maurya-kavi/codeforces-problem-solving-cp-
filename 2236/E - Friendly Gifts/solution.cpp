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
const int MAX_INF = 1e9;
const int MIN_INF = -1e9;
 
void solve()
{
    ll n;
    cin >> n;
    
    iv(a, n);
 
    int size = (n + 2) * (n + 2);
    vector<int> min_R(size, MAX_INF);
    vector<int> max_L(size, MIN_INF);
    vector<int> seen(n + 1, 0);
 
    f(i, n) {
        int mn = a[i], mx = a[i];
        int ticket = i + 1;
        
        for (int j = i; j < n; j++) {
            if (seen[a[j]] == ticket) break;
            seen[a[j]] = ticket;
            
            if (a[j] < mn) mn = a[j];
            if (a[j] > mx) mx = a[j];
            
            int L = j - i + 1;
 
            if (mx - mn == L - 1) {
                int id = L * (n + 1) + mn;
                if (j < min_R[id]) min_R[id] = j;
                if (i > max_L[id]) max_L[id] = i;
            }
        }
    }
 
    int ans = 0;
    for (int L = n / 2; L >= 1; L--) {
        for (int v = 1; v + 2 * L - 1 <= n; v++) {
            int id1 = L * (n + 1) + v;
            int id2 = L * (n + 1) + (v + L);
            
            if (min_R[id1] != MAX_INF && max_L[id2] != MIN_INF) {
                if (min_R[id1] < max_L[id2]) {
                    ans = L;
                    break;
                }
            }
            if (min_R[id2] != MAX_INF && max_L[id1] != MIN_INF) {
                if (min_R[id2] < max_L[id1]) {
                    ans = L;
                    break;
                }
            }
        }
        if (ans != 0) break;
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