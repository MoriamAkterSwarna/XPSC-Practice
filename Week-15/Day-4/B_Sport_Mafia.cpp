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

    
    ll l = 0, r = n;
    while (l <= r)
    {
        ll x = (l + r) / 2; 
        ll put = n - x;     

   
        ll total = (put * (put + 1)) / 2;
    
        ll final = total - x;

        if (final == k)
        {
            cout << x << nl;
            return;
        }

        if (final > k)
        {
            l = x + 1;
        }
        else
        {
            r = x - 1;
        }
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