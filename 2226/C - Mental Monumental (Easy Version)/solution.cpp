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
 
bool check(int M, const vector<int>& a) {
    vector<bool> found(M, false);
    vector<int> U; 
    vector<int> V; 
    for (int i = a.size() - 1; i >= 0; --i) {
        if (a[i] < M && !found[a[i]]) {
            found[a[i]] = true;
        } else {
            V.push_back(a[i]);
        }
    }
 
    for (int k = M - 1; k >= 0; --k) {
        if (!found[k]) {
            U.push_back(k);
        }
    }
 
    int v_idx = 0;
    for (int u : U) {
        if (v_idx < V.size() && V[v_idx] >= 2 * u + 1) {
            v_idx++; 
        } else {
            return false; 
        }
    }
 
    return true;
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    sort(a.begin(), a.end());
 
    int low = 0, high = n + 1;
    int ans = 0;
 
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (check(mid, a)) {
            ans = mid;
            low = mid + 1; 
        } else {
            high = mid - 1;
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