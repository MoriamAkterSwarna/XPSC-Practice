// ? https://codeforces.com/problemset/problem/1744/C 

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){

    ll n; 
    char c; 
    cin >> n >> c; 
    string s; 
    cin >> s;

    s = s+s; 
    int cnt=0, dist = 0; 
    bool flag = false;

    if(c == 'g'){
        cout << 0 << nl; 
        return;
    }

    for(int i = 0 ; i < s.length(); i++){
            if(s[i] == 'g'){
               dist = max(dist, cnt); 
               flag= false; 
            }

            if(s[i] == c && flag == false){
                cnt = 0; 
                flag = true; 
            }

            if(flag){
                cnt++;
            }
            
    }
    

    cout << dist << nl;
        
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