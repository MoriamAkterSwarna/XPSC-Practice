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

    ll n ; 
    cin >> n;
    // * Brute Force Approach * //
    // vector<ll> a(n);

    // for(ll i = 0; i < n; i++){
    //     cin >> a[i]; 
    // } 

    // bool flag = false;
    // for(ll i = 0; i < n; i++){
    //     for(ll j = i+1; j < n; j++){
    //         for(ll k = j+1; k < n; k++){
    //             if((a[i] + a[j] + a[k]) % 10 == 3){
    //                  cout << i+1 << " " << j+1 << " " << k+1 << nl; 
    //                  cout << "YES" << nl;
    //                 flag = true;
    //                 break;
    //             }
                
    //         }
    //     }
    // }
    // if (flag){
    //     cout << "YES" << nl;
    // }else{
    //     cout << "NO" << nl;
    // }

    // * Optimized Approach * //

    vector<int> dg;

  
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        x %= 10;
        if (freq[x] < 3)
        {
            dg.push_back(x);
            freq[x]++;
        }
    }


    int sz = dg.size();
    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            for (int k = j + 1; k < sz; k++)
            {
                if ((dg[i] + dg[j] + dg[k]) % 10 == 3)
                {
                    cout << "YES" << nl;
                    return;
                }
            }
        }
    }

    cout << "NO" << nl;
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