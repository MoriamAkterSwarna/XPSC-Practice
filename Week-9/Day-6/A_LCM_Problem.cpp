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
    ll l, r;
    cin >> l >> r;

    
    if (l == r || r < 2 * l)
    {
        cout << "-1 -1" << nl;
        return;
    }

   
    cout << l << " " << 2 * l << nl;
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