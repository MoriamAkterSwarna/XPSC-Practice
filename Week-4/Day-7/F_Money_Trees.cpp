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
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> h(n);

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    int mx = 0, l = 0, r = 0, fruits = 0;

    while (r < n)
    {
        fruits += a[r];
        if (r > 0 && h[r - 1] % h[r] != 0)
        {
            fruits = a[r];
            l = r;
        }
        while (fruits > k)
        {
            fruits -= a[l];
            l++;
        }
        mx = max(mx, r - l + 1);

        r++;
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