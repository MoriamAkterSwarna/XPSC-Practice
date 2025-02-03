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
    int n, m, k;
    cin >> n >> m >> k;

    
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    
    vector<vector<ll>> M(m + 1, vector<ll>(3));
    for (int i = 1; i <= m; i++)
    {
        cin >> M[i][0] >> M[i][1] >> M[i][2];
    }

    
    vector<ll> dif(m + 2, 0);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        dif[x]++;
        dif[y + 1]--;
    }

    
    for (int i = 1; i <= m; i++)
    {
        dif[i] += dif[i - 1];
    }

    
    vector<ll> b(n + 2, 0);
    for (int i = 1; i <= m; i++)
    {
        ll val = dif[i] * M[i][2];
        if (val != 0)
        {
            b[M[i][0]] += val;
            b[M[i][1] + 1] -= val;
        }
    }

    
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += b[i];
        cout << a[i] + sum << " ";
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