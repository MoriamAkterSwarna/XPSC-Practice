#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){
    ll l, r;
    cin >> l >> r;

    cout << "YES" << nl;
    for (ll i = l; i < r; i += 2)
    {
        cout << i << " " << i + 1 << nl;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
        firebird_solve();
    

    return 0;
}