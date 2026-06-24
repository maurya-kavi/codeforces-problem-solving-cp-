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
    ll n;
    cin >> n;
    
    iv(a,n);
    
    vector<ll>v;
    bool flag = false;
 
    for(int i=n-1; i>=0; i--){
        ll cVal;
        if(flag){
            cVal=-a[i];
        }else {
            cVal=a[i];
        }
        if(cVal>0){
            v.pb(i+1);
            flag=!flag;
        }
    }
    cout<<v.size()<<nline;
    f(i, v.size()) cout<<v[i]<<" ";
    cout<<nline;
 
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