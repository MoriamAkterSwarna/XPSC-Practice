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
    ll n, q;
    cin >> n >> q;

    vector<ll> ht(n);
    vector<ll> mxHt(n);
    vector<ll> pref(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> ht[i];
        if (i == 0)
        {
            mxHt[i] = ht[i];
            pref[i] = ht[i];
        }
        else
        {
            mxHt[i] = max(mxHt[i - 1], ht[i]);
            pref[i] = pref[i - 1] + ht[i];
        }
    }

    while (q--)
    {
        ll len;
        cin >> len;

        ll pos = upper_bound(mxHt.begin(), mxHt.end(), len) - mxHt.begin();
        if (pos == 0)
            cout << 0 << " ";
        else
            cout << pref[pos - 1] << " ";
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