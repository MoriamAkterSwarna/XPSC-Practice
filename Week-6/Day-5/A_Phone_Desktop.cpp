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

    int x, y;
    cin >> x >> y;

    int result = 0;
    if (y % 2 == 0)
    {
        result = y / 2 + 0;
    }
    else
    {
        result = y / 2 + 1;
    }

    int val = 15 * result;
    val = val - 4 * y;
    int v = 0;
    if (x > val)
    {
        if ((x - val) % 15 == 0)
        {
            v = (x - val) / 15 + 0;
        }
        else
        {
            v = (x - val) / 15 + 1;
        }
    }
    result = result + v;
    cout << result << nl;
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