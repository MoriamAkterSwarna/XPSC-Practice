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
    int n;
    cin >> n;
    vector<int> a(n);

    map<int, int> freq;
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // For condition aj - ai = j - i
        // We can rewrite it as: aj - j = ai - i
        // So we count frequency of (a[i] - i)
        ans += freq[a[i] - i];
        freq[a[i] - i]++;
    }

    cout << ans << nl;
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