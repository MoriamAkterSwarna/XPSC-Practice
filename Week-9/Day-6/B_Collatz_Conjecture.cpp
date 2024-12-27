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
    ll x, y, k;
    cin >> x >> y >> k;

    while (k && x != 1)
    {
        ll val = (x / y + 1) * y - x; 
        if (!val)
            val = 1;
        if (val > k)
            val = k;

        x += val;
        while (x % y == 0)
        {
            x /= y;
        }
        k -= val;
    }

    cout << x + k % (y - 1) << nl;
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