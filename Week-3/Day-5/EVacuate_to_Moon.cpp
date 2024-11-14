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

    ll n, m, h;
    cin >> n >> m >> h;

    vector<ll> a(m);
    vector<ll> b(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        
    }

    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
        
    }

    sort(a.begin(), a.end(), greater<ll>());
    sort(b.begin(), b.end(), greater<ll>());

    

    ll total = 0;

    for (ll i = 0; i < min(n, m); i++)
    {
        // cout << a[i] << " " << b[i] << nl;
        total += min((ll)(a[i] * h), (ll)b[i]);
    }

    cout << total << nl;
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