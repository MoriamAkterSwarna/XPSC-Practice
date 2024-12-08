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
    ll n;
    cin >> n;
    ll z = 0;
    bool flag1(false), flag2(false);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 0)
        {
            z++;
        }
        else if (x == 1)
        {
            flag1 = true;
        }
        else if (x > 1)
        {
            flag2 = true;
        }
    }

    long res = 0;
    if (z > (n + 1) / 2)
    {
        if (!flag1 || flag2)
        {
            res = 1;
        }
        else
        {
            res = 2;
        }
    }

    cout << res << nl;
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