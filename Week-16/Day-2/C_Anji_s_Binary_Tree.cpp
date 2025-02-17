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



const int maxN = 3e5 + 9;
vector<int> g[maxN], op(maxN);
string str;


void dfs(int u)
{
   if(g[u][0] != 0){
    int v = g[u][0]; 
    if(str[u-1] != 'L')
    {
        op[v] = op[u] + 1; 
    }else {
        op[v] = op[u]; 
    }
    dfs(v);
   }

    if(g[u][1] != 0){
     int v = g[u][1]; 
     if(str[u-1] != 'R')
     {
          op[v] = op[u] + 1; 
     }else {
          op[v] = op[u]; 
     }
     dfs(v);
    }
}

void firebird_solve()
{
    int n; 
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        g[i].clear();
        op[i] = 0;
    }

    cin >> str; 
    for(int i = 1; i <= n ; i++){
        int l, r; 
        cin >> l >> r;
        g[i].push_back(l);
        g[i].push_back(r);
    }

    dfs(1); 

    int result = INT_MAX; 

    for(int i = 1; i <= n; i++){
        if(g[i][0] == 0 && g[i][1] == 0){
            // cout << op[i] << " "; 

            result = min(result, op[i]);
        }
    }

    cout << result << nl;



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