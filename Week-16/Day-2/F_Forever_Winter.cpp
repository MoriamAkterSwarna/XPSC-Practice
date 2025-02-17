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

    int n, m; 
    cin >> n >> m; 

    map<int, set<int>> mp; 
    for(int i = 0; i < m; i++){
        int a, b; 
        cin >> a >> b; 
        mp[a].insert(b); 
        mp[b].insert(a); 
    }

    int leaf = -1, parOfLeaf = -1;

    for(int i = 1; i <= n; i++){
        if(mp[i].size() == 1){
            leaf = i;    
            break; 
        }
    }
    int x, y;
    for(int i = 1; i <= n; i++){
        if(mp[i].find(leaf) != mp[i].end()){
            y = mp[i].size() -1;
            parOfLeaf = i; 
            break; 
        }
    }

    
    for(int i = 1; i <= n; i++){
        if(mp[i].find(parOfLeaf) != mp[i].end() && mp[i].size() > 1){
            x = mp[i].size() ; 
            break; 
        }
    }

    cout << x << " " << y << nl;
        
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