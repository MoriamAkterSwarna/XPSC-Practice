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
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void firebird_solve()
{
    int n, m;
    cin >> n >> m;
    pbds<int> s;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        cout << s.order_of_key(x + 1) << " ";
    }
    cout << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
        firebird_solve();
    

    return 0;
}