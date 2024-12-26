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
    ll A, B;
    cin >> A >> B;

    if (B == 1)
    {
        cout << "NO" << nl;
        return;
    }

    cout << "YES" << nl;
    cout << A << " " << A * B * 1LL << " " << A * (B + 1) * 1LL << nl;
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