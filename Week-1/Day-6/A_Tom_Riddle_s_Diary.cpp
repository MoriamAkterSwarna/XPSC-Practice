#include <bits/stdc++.h>
using namespace std;
#define ll long long; 


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    map<string, int> m; 
    while(t--){
        string s; 
        cin >> s; 
        if(m[s] == 0){
            cout << "NO" << endl; 
            m[s]++; 
        }
        else{
            cout << "YES" << endl; 
        }


    }

    return 0;
}