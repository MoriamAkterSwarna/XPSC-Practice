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
    int n, k;
    cin >> n >> k;

    int md = 0;
    int even = 0;
    bool flag = false;

    for (int p = 0; p < n; p++)
    {
        int x;
        cin >> x;
        x %= k;

        if (x)
        {
            md = max(md, x);
        }
        else
        {
            flag = true;
        }

        if (x == 2)
        {
            ++even;
        }
    }

    if (flag)
    {
        cout << "0" << nl;
    }
    else if (k == 4)
    {
        if (even >= 2)
        {
            cout << "0" << nl;
        }
        else if (even >= 1 || md == 3)
        {
            cout << "1" << nl;
        }
        else
        {
            cout << "2" << nl;
        }
    }
    else
    {
        cout << k - md << nl;
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