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

    if (n % 2)
    {
        cout << "NO" << nl;
        return;
    }
    else
    {
        cout << "YES" << nl;
        for (int i = 0; i < n / 2; i++)
        {
            if (i % 2)
            {
                cout << "AA";
            }
            else
            {
                cout << "BB";
            }
        }
        cout << nl;
    }
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