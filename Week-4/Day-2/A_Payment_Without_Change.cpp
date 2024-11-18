#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){

    ll a, b, n, s; 
    cin >> a >> b >> n >> s; 
    ll coins_a = n * a;  

    if(coins_a + b < s){
        cout << "NO" << nl; 
    }else{
        if(s % n <= b){
            cout << "YES" << nl; 
        }else{
            cout << "NO" << nl; 
        }
    }
        
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tst{
        firebird_solve();
    }

    return 0;
}