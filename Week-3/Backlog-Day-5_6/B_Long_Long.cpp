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
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + abs(a[i]);
    }
    // cout << sum << nl;

    ll cnt = 0;
    bool flag = false;

    for (ll i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            if (!flag)
            {
                cnt++;
                flag = true;
            }
        }
        else if (a[i] > 0)
        {
            flag = false;
        }
    }

    cout << sum << " " << cnt << nl;
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