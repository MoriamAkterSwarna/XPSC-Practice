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
    int size = n * (n - 1) / 2;
    vector<ll> b(size);
    for (ll i = 0; i < size; ++i)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());

    ll idx = 0, cnt = n - 1;
    vector<ll> res;

    while (idx < size)
    {
        res.push_back(b[idx]);
        idx += cnt;
        cnt--;
    }
    res.push_back(res.back());

    for ( ll i = 0; i < n; i++)
    {
        cout << res[i] << " ";
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