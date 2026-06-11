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
    ll n;
    cin>>n;
    iv(a,n);
    ll diff=0;
    for(int i=1; i<n; i++){
        if(a[i-1]>a[i]){
            diff=max(diff,a[i-1]-a[i]);
        }
    }
    for(int i=1; i<n; i++){
        if(a[i-1]>a[i]){
            a[i]=a[i]+diff;
            if(a[i]<a[i-1]) {
                no;
                return;
            }
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