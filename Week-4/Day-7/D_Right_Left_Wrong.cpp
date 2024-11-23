
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
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;

    vector<ll> pref(n + 1);
    pref[0] = 0;
    for (ll i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + a[i];
    }

    ll l = 0, r = n - 1, mx = 0;
    while (l < r)
    {
        if (s[l] == 'L' && s[r] == 'R')
        {
            mx += pref[r + 1] - pref[l];
            l++;
            r--;
        }
        else
        {
            if (s[l] != 'L')
            {
                l++;
            }
            if (s[r] != 'R')
            {
                r--;
            }
        }
    }

    cout << mx << nl;
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