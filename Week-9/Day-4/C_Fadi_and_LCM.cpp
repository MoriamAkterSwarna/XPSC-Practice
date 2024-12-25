#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}
void firebird_solve()
{
    ll x;
    cin >> x;

    pair<ll, ll> ans = {1, x};
    ll sqrtX = sqrt(x);

    for (ll i = 1; i <= sqrtX; i++)
    {
        if (x % i == 0)
        {
            ll a = i;
            ll b = x / i;
            if (lcm(a, b) == x)
            {
                if (max(a, b) < max(ans.first, ans.second))
                {
                    ans = {a, b};
                }
            }
        }
    }

    cout << ans.first << " " << ans.second << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    firebird_solve();

    return 0;
}