#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){

    int n, k; 
    cin >> n >> k; 
    string a; 
    cin >> a; 

    int op = 0; 
    int start = 0;  

    while(start < n ){
        if(a[start] == 'B'){
            op++; 
            
            start = start + k; 
        }
        else{
            start++; 
        }
    }
    cout << op << nl;
        
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