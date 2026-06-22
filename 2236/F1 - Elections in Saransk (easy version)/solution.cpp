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
 
const int MOD = 1e9 + 7;
const int MAXA = 500005;
 
int spf[MAXA];
int freq[MAXA];
 
void precompute() {
    for (int i = 2; i < MAXA; i++) spf[i] = i;
    for (int i = 2; i * i < MAXA; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAXA; j += i) {
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}
 
void solve()
{
    ll n, x;
    cin >> n >> x;
    iv(a, n);
 
    vector<int> active_primes;
 
    f(i, n) {
        int num = a[i];
        
        while (num > 1) {
            int p = spf[num];
            int count = 0;
            
            while (num % p == 0) {
                count++;
                num /= p;
            }
            
            if (freq[p] == 0) {
                active_primes.pb(p);
            }
            
            freq[p] += count;
        }
    }
 
    ll ans = 1;
    
    for (int p : active_primes) {
        ans = (ans * (freq[p] + 1)) % MOD;
        freq[p] = 0;
    }
 
    cout << ans << nline;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    precompute();
 
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}