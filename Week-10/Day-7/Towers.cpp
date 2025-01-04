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
    multiset<ll> t;

    for (ll i = 0; i < n; i++)
    {
        ll cb;
        cin >> cb;

        auto it = t.upper_bound(cb);
        if (it != t.end())
        {
            t.erase(it);
            t.insert(cb);
        }
        else
        {
            t.insert(cb);
        }
    }

    cout << t.size() << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    firebird_solve();

    return 0;
}