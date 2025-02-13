#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 

using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--) 
#define yc cout << "YES" << nl;
#define nc cout << "NO" << nl; 
#define ys cout << "Yes" << nl; 
#define ns cout << "No" << nl; 
#define nn int n; cin >> n;  

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;



void firebird_solve(){
        ll n, k; 
        cin >> n >> k;

        string s;
        cin >> s; 

        int cnt = 0; 

        for(int i = 0; i < n; i++){
            if(s[i] == 'B'){
                cnt++;
            }
        }
        if(cnt == k){
            cout << 0 << nl;
            return;
        }
        cout << "1" << nl; 
        for(int i = 0; i < n; i++){
            if(s[i] == 'B'){
                cnt--;

            }
            if(cnt == k){
                cout << i+1 << " "<<'A' << nl;
                return;
            }
            if(cnt == k-i-1){
                cout << i+1 << " "<<'B' << nl;
                return;
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