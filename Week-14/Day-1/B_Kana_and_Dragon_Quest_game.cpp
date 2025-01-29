#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){
    int x, n, m;
    cin >> x >> n >> m;

    
    while (n > 0 && x > 20)
    {
        x = (x / 2) + 10;
        n--;
    }

    
    x -= m * 10;
 

    if (x <= 0)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
    }
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