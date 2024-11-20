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
    long long k;
    cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll l = 0, r = 0;
    long long result = 0;

    multiset<ll> s;

    while (r < n)
    {
        s.insert(a[r]);
        ll mn = *s.begin(), mx = *s.rbegin();

        if (mx - mn <= k)
        {
            result += r - l + 1;
        }
        else
        {
            while (l <= r)
            {
                mn = *s.begin(), mx = *s.rbegin();
                if (mx - mn <= k)
                {
                    break;
                }

                s.erase(s.find(a[l]));
                l++;
            }
            mn = *s.begin(), mx = *s.rbegin();
            if (mx - mn <= k)
            {
                result += r - l + 1;
            }
        }
        r++;
    }
    cout << result << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    firebird_solve();

    return 0;
}