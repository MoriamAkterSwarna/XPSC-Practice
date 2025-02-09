#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);


    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    int tank = 0;


    if (n > 0)
    {
        tank = max(tank, a[0]);
    }

    
    for (int i = 1; i < n; i++)
    {
        tank = max(tank, a[i] - a[i - 1]);
    }

    if (n > 0)
    {
        tank = max(tank, 2 * (x - a[n - 1]));
    }
    else
    {
        
        tank = 2 * x;
    }

    cout << tank << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tst
    {
        firebird_solve();
    }

    return 0;
}