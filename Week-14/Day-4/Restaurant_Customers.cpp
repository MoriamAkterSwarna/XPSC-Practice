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
    cin >> n;
    vector<ll> ar(n), dp(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i] >> dp[i];
    }

    sort(ar.begin(), ar.end());
    sort(dp.begin(), dp.end());

    int curr = 0;
    int mx = 0;
    int a = 0, d = 0;

    while (a < n && d < n)
    {
        if (ar[a] < dp[d])
        {
            curr++;
            mx = max(mx, curr);
            a++;
        }
        else
        {
            curr--;
            d++;
        }
    }

    cout << mx << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    firebird_solve();

    return 0;
}