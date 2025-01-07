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

    auto ok = [&](int mid)
    {
        return (mid - (mid / n)) >= k;
    };

    int l = 1, r = 2e9, mid, result;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            result = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << result << nl;
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