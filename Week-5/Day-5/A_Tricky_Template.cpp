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
    string a, b, c;
    cin >> a >> b >> c;

    bool possible = false;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != c[i] && b[i] != c[i])
        {
            possible = true;
            break;
        }
    }

    if (possible)
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
    tst
    {
        firebird_solve();
    }

    return 0;
}