#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)

void firebird_solve()
{
    int n; 
    cin >> n; 

    vector<int>a(n); 
    for(int i = 0; i < n; i++)
    {
        cin >> a[i]; 
    }
    string s(n, ' '); 
    unordered_map<char, int> mp; 
    char curr = 'a'; 

    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            cout << curr ;
            
            mp[curr]++ ; 
            curr++;
        }
        else
        {
            for(auto j : mp)
            {
                if(j.second == a[i]){
                    cout << j.first ; 
                    mp[j.first]++;
                    break;
                }
                
            }
        }
    }
    cout  << nl;
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