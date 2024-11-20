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
    ll k;
    cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = 0, res = 0;
    ll sum = 0;

    while (r < n)
    {
        sum += a[r];

        while (sum >= k)
        {
            res += (n - r);

            sum -= a[l];
            l++;
        }

        r++;
    }

    cout << res << nl;
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