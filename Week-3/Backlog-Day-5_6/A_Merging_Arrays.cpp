#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){

    int n, m; 
    cin >> n >> m; 

    vector<int> a(n), b(m); 

    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    } 

    for(int i = 0; i < m; i++){
        cin >> b[i]; 
    } 

    // for(auto x: a){
    //     cout << x << " "; 
    // } 
    // cout << nl;

    // for(auto x: b){
    //     cout << x << " "; 
    // }
    // cout << nl;

    vector<int> result; 

    int i = 0, j = 0; 

    while(i < n){
        result.push_back(a[i]);
        i++;
    }
    while(j < m){
        result.push_back(b[j]);
        j++;
    } 

    sort(result.begin(), result.end());

    for(auto x: result){
        cout << x << " "; 
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