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


const int maxN = 1e5 + 9, inf = 1e9 + 9;
int a[maxN], t[maxN * 4];

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = min(t[l], t[r]); 
}

void update(int n, int b, int e, int i, int v)
{
    if (i < b || i > e)
    {
        return;
    }
    if (b == e)
    {
        t[n] = v;
        return;
    }
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[n] = min(t[l], t[r]); 
}

int query(int n, int b, int e, int i, int j)
{
    if (e < i || j < b)
    {
        return inf; 
    }
    if (b >= i && e <= j)
    {
        return t[n];
    }
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    return min(query(l, b, mid, i, j), query(r, mid + 1, e, i, j)); 
}



void firebird_solve()
{
    int n, m; 
    cin >> n >> m; 

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    } 

    build(1, 1, n); 

    while (m--)
    {
        int op; 
        cin >> op; 
        if (op == 1)
        {
            int i, v; 
            cin >> i >> v; 
            i++;
            update(1, 1, n, i, v); 
        }
        else
        {
            int l, r; 
            cin >> l >> r; 
            l++;
            cout << query(1, 1, n, l, r) << nl; 
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