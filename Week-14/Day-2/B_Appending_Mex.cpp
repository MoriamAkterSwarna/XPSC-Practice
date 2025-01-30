#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){
        ll n; 
        cin >> n; 
        ll mx = -1; 
        ll x ; 
        bool flag = false; 
        for(ll i = 0; i < n; i++){
            cin >> x; 
            if( x > mx + 1){
                cout << i + 1; 
                flag = true; 
                break; 
            }
            mx = max(mx, x); 
        }
        if(!flag){
            cout << -1; 
        }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // tst{
        firebird_solve();
    // }

    return 0;
}