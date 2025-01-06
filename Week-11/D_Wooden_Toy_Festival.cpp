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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    auto ok = [&](int time)
    {
        int cnt = 1, l = 0;
        for (int r = 0; r < n; r++)
        {
            if ((a[r] - a[l]) > 2 * time)
            {
                l = r;
                cnt++;
            }
        }
        return cnt <= 3;
    };

    int l = 0, r = 1e9, mid, result;
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

    cout << result << '\n';
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