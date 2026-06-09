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
 
    vector<int> pos_open, pos_close;
    f(i, n) {
        if (s[i] == '(') pos_open.pb(i);
        else pos_close.pb(i);
    }
 
    ll noofopen = pos_open.size();
    ll noofclose = pos_close.size();
 
    ll mnr = INF;
    string best_ans = "";
    ll start_x = max(0LL, k - noofclose);
    ll end_x = min(k, noofopen);
 
    for (ll x = start_x; x <= end_x; x++) {
        ll y = k - x;
        vector<bool> del(n, false);
        f(i, x) del[pos_open[i]] = true;
        for (ll i = noofclose - y; i < noofclose; i++) del[pos_close[i]] = true;
        ll rbs = 0;
        ll cur_open = 0;
        f(i, n) {
            if (del[i]) continue;
            
            if (s[i] == '(') {
                cur_open++;
            } else {
                if (cur_open > 0) {
                    cur_open--;
                    rbs += 2;
                }
            }
        }
 
        if (rbs < mnr) {
            mnr = rbs;
            best_ans = "";
            f(i, n) best_ans += (del[i] ? '1' : '0');
        }
    }
 
    cout << best_ans << nline;
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