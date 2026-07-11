#include <iostream>
#include <vector>
 
using namespace std;
 
typedef long long ll;
 
void solve() {
    ll k;
    cin >> k;
    
    ll count_greater_equal_2 = 0;
    bool has_greater_equal_3 = false;
    
    for (ll i = 0; i < k; i++) {
        ll c;
        cin >> c;
        
        if (c >= 3) {
            has_greater_equal_3 = true;
        }
        if (c >= 2) {
            count_greater_equal_2++;
        }
    }
   
    if (has_greater_equal_3 || count_greater_equal_2 >= 2) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}