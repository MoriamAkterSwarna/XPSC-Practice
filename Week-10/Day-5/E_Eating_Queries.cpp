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
    vector<int> v(n), pre(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i - 1];
    }
    for (int i = 0; i < q; i++)
    {
        int k, result = -1;
        cin >> k;
        auto it = lower_bound(pre.begin(), pre.end(), k);
        if (it != pre.end())
        {
            result = it - pre.begin();
        }
        cout << result << nl;
    }
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