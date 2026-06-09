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
    iv(b,n);
 
    sort(b.begin(),b.end(),greater<ll>());
    if(n<=2) {
        f(i,n) cout<<b[i]<<" ";
        cout<<nline;
    }
    else{
        bool valid=true;
        for(int i=2; i<n; i++) {
            if(b[i]!=(b[i-2]%b[i-1])){
                valid=false;
                break;
            }
        }
        if(valid) {
            cout<<b[0]<<" "<<b[1]<<" ";
            cout<<nline;
        }
        else{
            cout<<-1<<nline;
        }
    }
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