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
    vector<ll> a(n);
    vector<ll> b(n + 1, 0);
    for (ll i = 1; i < n; i++)
    {
        cin >> b[i];
    }

    for (ll i = 0; i < n; i++)
    {
        a[i] = b[i] | b[i + 1];
    }

    bool flag = true;

    for (ll i = 1; flag && i < n; i++)
    {
        if ((a[i - 1] & a[i]) != b[i])
        {
            flag = false;
        }
    }
    if (!flag)
    {
        cout << -1 << nl;
        return;
    }
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << nl;
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