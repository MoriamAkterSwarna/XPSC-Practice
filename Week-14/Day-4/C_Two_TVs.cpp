#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){
        int n; 
        cin >> n; 

        map<int, int> mp; 
        for(int i = 1; i <= n; i++){
            int l, r; 
            cin >> l >> r; 
            mp[l]++; 
            mp[r + 1]--; 
        }
        ll sum = 0; 
        bool ok = true; 

        for(auto x: mp){
            sum += x.second; 
            if(sum > 2){
                ok = false; 
                break; 
            }
        }

        cout << (ok ? "YES" : "NO") << nl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
        firebird_solve();
    

    return 0;
}