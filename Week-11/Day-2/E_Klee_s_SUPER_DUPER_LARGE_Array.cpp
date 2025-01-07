#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
ll getDiff(ll n, ll k, ll i)
{

    ll leftSum = (k + (k + i - 1)) * i / 2;
    ll rightSum = ((k + i) + (k + n - 1)) * (n - i) / 2;
    return abs(leftSum - rightSum);
}

void firebird_solve()
{
    ll n, k;
    cin >> n >> k;

    ll left = 1, right = n;
    ll ans = LLONG_MAX;

    while (right - left >= 3)
    {
        ll mid1 = left + (right - left) / 3;
        ll mid2 = right - (right - left) / 3;

        ll diff1 = getDiff(n, k, mid1);
        ll diff2 = getDiff(n, k, mid2);

        ans = min({ans, diff1, diff2});

        if (diff1 < diff2)
            right = mid2;
        else
            left = mid1;
    }

    for (ll i = left; i <= right; i++)
    {
        ans = min(ans, getDiff(n, k, i));
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