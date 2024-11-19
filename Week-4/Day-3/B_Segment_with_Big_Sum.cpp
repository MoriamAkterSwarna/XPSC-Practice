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
    int n;
    ll k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0, ans = n + 1;
    ll sum = 0;

    while (r < n)
    {

        sum += a[r];

        while (sum >= k)
        {
            ans = min(ans, r - l + 1);

            sum -= a[l];
            l++;
        }

        r++;
    }
    if (ans > n)
        cout << -1 << nl;
    else
        cout << ans << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    firebird_solve();

    return 0;
}