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

    int x, y, z;
    cin >> x >> y >> z;

    // cout << x << " " << y << " " << z << nl;

    float team1 = (x * 1.0) + (y * 0.5); 
        float team2 = (z * 1.0) + (y * 0.5); 

        float tmp = 4 - ( x + y + z) * 1.0;
        
        if( (team1 + tmp) > team2)
        {
            cout << "Yes" << nl;
        }
        else
        {
            cout << "No" << nl;
        }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // tst
    // {
    firebird_solve();
    // }

    return 0;
}