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
    ll n,a,b;
    cin >> n >> a >> b;
 
    if(b>=3*a){
        cout<<a*n<<nline;
        return;
    }
 
    ll x=n/3;
    ll rem=n%3;
 
    ll ans=x*b;
    ll y=rem*a;
    ans+=min(y, b);
    cout<<ans<<nline;
    
 
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