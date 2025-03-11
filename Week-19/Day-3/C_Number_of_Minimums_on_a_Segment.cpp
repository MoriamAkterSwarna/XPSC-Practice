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

const int maxN = 1e5 + 9, inf = 1e9 + 9;
int a[maxN];

struct node
{
    int mn, count;
};
node t[maxN * 4];

node merge(node l, node r)
{
    node ans;
    ans.mn = min(l.mn, r.mn);
    ans.count = 0;
    if (l.mn == ans.mn)
    {
        ans.count += l.count;
    }
    if (r.mn == ans.mn)
    {
        ans.count += r.count;
    }
    return ans;
}

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n].mn = a[b];
        t[n].count = 1;
        return;
    }
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]);
}

void update(int n, int b, int e, int i, int x)
{
    if (i < b || i > e)
    {
        return;
    }
    if (b == e)
    {
        t[n].mn = x;
        t[n].count = 1;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, mid, i, x);
    update(r, mid + 1, e, i, x);
    t[n] = merge(t[l], t[r]);
}

node query(int n, int b, int e, int i, int j)
{
    if (e < i || j < b)
    {
        return {inf, 1};
    }
    if (b >= i && e <= j)
    {
        return t[n];
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

void firebird_solve(){

    int n, m; 
    cin >> n >> m; 
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    } 

    build(1, 1, n); 

    while(m--){
        int type; 
        cin >> type; 
        if(type == 1){
            int i, x; 
            cin >> i >> x; 
            i++;
            update(1, 1, n, i, x); 
        } 
        else{
            int l, r; 
            cin >> l >> r; 
            l++;
            node ans = query(1, 1, n, l, r); 
            cout << ans.mn << " " << ans.count << nl; 
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