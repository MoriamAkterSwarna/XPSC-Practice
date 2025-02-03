#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
#define maxN  2e5+5
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define yc cout << "YES" << nl;
#define nc cout << "NO" << nl;
#define ys cout << "Yes" << nl;
#define ns cout << "No" << nl;
#define nn \
    int n; \
    cin >> n;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void firebird_solve()
{
    int n, k, q ; 
    cin >> n >> k >> q; 

    vector<int> a(maxN); 
    while(n--){
        int l, r; 
        cin >> l >> r; 

        a[l]++; 
        a[r+1]--; 
    }

    int cnt = 0; 
    for(int i = 0; i < a.size(); i++){
        cnt += a[i]; 
        // a[i] = cnt;  

        if(cnt >= k){
            a[i] = 1;
        }else{ 
            a[i] = 0; 
        }
    }

    vector<int> pref(maxN);

    for(int i = 1; i < pref.size(); i++){
        pref[i] = a[i-1] + pref[i-1]; 
    }

    while(q--){
        int l, r; 
        cin >> l >> r; 

        cout << pref[r+1] - pref[l] << nl;
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