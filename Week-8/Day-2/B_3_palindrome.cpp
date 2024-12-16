#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)

void firebird_solve()
{
    int n;
    cin >> n;

    
    if (n <= 2)
    {
        for (int i = 0; i < n; i++)
        {
            cout << 'a';
        }
        cout << nl;
        return;
    }

    
    string pattern = "aabb";
    for (int i = 0; i < n; i++)
    {
        cout << pattern[i % 4];
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