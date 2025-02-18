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


typedef long long i64; 

const int INF = 1e7 + 5;


vector<int> adj[200005], dlt;

int vis[100005], cost[100005];

int n; 


void reset()
{
    memset(vis, 0, sizeof(vis));
}

int dfs(int u)
{
    vis[u] = 1;

    int mn = cost[u]; 
    for(int ng : adj[u])
    {
        if(!vis[ng])
        {
            
            mn = min(mn, dfs(ng));
        }
    }

    vis[u] = 2 ; 
    if(mn  == 1){
        dlt.push_back(u);
    }

    return cost[u]; 
}

void firebird_solve()
{

     reset(); 

     int rt ; 
     cin >> n; 

     for(int i = 1; i <= n; i++){
        int par;
        cin >> par >> cost[i]; 

        if(par == -1){
            rt = i; 
        }
        else{
            adj[par].push_back(i);
        }
     }

        dfs(rt);

        sort(dlt.begin(), dlt.end()); 

        if(dlt.empty()){
            cout << "-1" << nl; 
        }
        else{
            cout << dlt[0];
            for(int i = 1; i < dlt.size(); i++){
                cout << " " << dlt[i]; 
            }
            cout << nl; 
        }
        return; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
        firebird_solve();
 

    return 0;
}