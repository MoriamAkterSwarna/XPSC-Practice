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
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> diff(n + 1);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        diff[l]++;
        diff[r + 1]--;
    }

    for (int i = 1; i <= n; i++)
    {
        diff[i] += diff[i - 1];
    }
    sort(a.rbegin(), a.rend());
    sort(diff.rbegin(), diff.rend());

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        // cout << diff[i] << " " << a[i] << nl;
        ans += (ll)a[i] * diff[i];
    }
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