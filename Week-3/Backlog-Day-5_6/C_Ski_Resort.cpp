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
    ll n, k, q;
    cin >> n >> k >> q;

    vector<ll> temperatures(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> temperatures[i];
    }

    ll cnt = 0;
    ll left = 0;

    while (left < n)
    {
        

        while (left < n && temperatures[left] > q)
        {
            left++;
        }
        if(left >= n) {
            break;
        }

        ll right = left;
        while (right < n && temperatures[right] <= q)
        {
            right++;
        }

        ll length = right - left;

        if (length >= k)
        {       ll temp = length - k + 1;
        ll temp2 = length - k + 2;
            cnt += (temp * temp2) / 2;
        }

        left = right;
    }
    cout << cnt << nl;
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