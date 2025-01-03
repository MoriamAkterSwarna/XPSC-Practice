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
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll total = 0, cnt = 0;
    map<ll, ll> pref;
    pref[0] = 1;

    for (int i = 0; i < n; i++)
    {
        total += a[i];
        cnt += pref[total - x];
        pref[total]++;
    }

    cout << cnt << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    firebird_solve();

    return 0;
}