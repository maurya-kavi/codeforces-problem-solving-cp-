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
 
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<int, char>> freq(26);
    for (int i = 0; i < 26; i++)
        freq[i].second = 'a' + i; 
    for (char c : s)
        freq[c - 'a'].first++;        
    sort(freq.rbegin(), freq.rend());
 
    int best_k = 1, changes = n;
    for (int k = 1; k <= 26; k++)
    {
        if (n % k) continue; 
        int unchanged = 0;
        for (int i = 0; i < k; i++)
            unchanged += min(freq[i].first, n / k);
        if (n - unchanged < changes)
        {
            best_k = k;
            changes = n - unchanged;
        }
    }
 
    map<char, int> mp;
    for (int i = 0; i < best_k; i++)
        mp[freq[i].second] = n / best_k;
 
    string ans(n, ' ');
    for (int i = 0; i < n; i++)
    {
        if (mp[s[i]] > 0)
        {
            ans[i] = s[i];
            mp[s[i]]--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ans[i] != ' ') continue; 
        while (!mp.empty() && (*mp.begin()).second == 0)
            mp.erase(mp.begin());     
        char ch = (*mp.begin()).first; 
        ans[i] = ch;
        mp[ch]--;
    }
 
    cout << changes << nline<< ans << nline;
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