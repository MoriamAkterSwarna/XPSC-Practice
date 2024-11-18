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

    int a, b, c;
    cin >> a >> b >> c;

    int first = a - 1;
    int second = abs(b - c) + (c - 1);

    if (first < second)
    {
        cout << 1 << nl;
    }
    else if (first > second)
    {
        cout << 2 << nl;
    }
    else
    {
        cout << 3 << nl;
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