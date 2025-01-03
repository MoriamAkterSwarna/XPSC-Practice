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
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    ll res = 0;

    for (int i = 0; i < n - 1; i++)
    {
        
        ll lt = lower_bound(a.begin() + i + 1, a.end(), l - a[i]) - (a.begin() + i + 1);
        
        ll rt = upper_bound(a.begin() + i + 1, a.end(), r - a[i]) - (a.begin() + i + 1);
        res += rt - lt;
    }

    cout << res << nl;
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