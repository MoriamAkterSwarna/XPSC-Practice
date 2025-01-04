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
    ll x, n;
    cin >> x >> n;

    set<ll> p{0, x};
    multiset<ll> len{x};

    for (ll i = 0; i < n; i++)
    {
        ll pos;
        cin >> pos;

        auto it = p.upper_bound(pos);
        ll r = *it;
        ll l = *(--it);

        p.insert(pos);
        len.erase(len.find(r - l));
        len.insert(pos - l);
        len.insert(r - pos);

        cout << *len.rbegin() << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    firebird_solve();

    return 0;
}