// ? https://codeforces.com/problemset/problem/1714/B 

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){

    int n; 
    cin >> n; 

    vector<int> a; 

    for(int i = 0; i < n; i++){
        int x; 
        cin >> x; 
        a.push_back(x); 
    } 

    // for( int i : a){
    //     cout << i << " "; 
    // }
    // cout << nl;

    set<int> s;
    int len = 0; 
    for(int i = n-1; i >= 0; i--){
        if(s.count(a[i])){
            len  = i +1;  
            break; 
        }
        s.insert(a[i]); 
    }

    cout << len << nl;


        
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