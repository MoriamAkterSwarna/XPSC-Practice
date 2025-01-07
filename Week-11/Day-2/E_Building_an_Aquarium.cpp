#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
bool isPossible(vector<ll> &a, ll h, ll x)
{
    ll water = 0;
    for (ll i = 0; i < a.size(); i++)
    {
        if (a[i] < h)
        {
            water += h - a[i];
        }
    }
    if (water > x)
    {
        return false;
    }
    return true;
}
void firebird_solve()
{
    ll n, x;
    cin >> n >> x;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll left = 1, right = INT_MAX;
    ll ans = -1;

    while (left <= right)
    {
        ll mid = left + (right - left) / 2;
        if (isPossible(a, mid, x))
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << ans << nl;
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