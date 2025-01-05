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
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    while (q--)
    {
        int qr;
        cin >> qr;
        auto it = lower_bound(v.begin(), v.end(), qr);
        if (it != v.end() && *it == qr)
        {
            cout << qr << " found at " << (it - v.begin() + 1) << nl;
        }
        else
        {
            cout << qr << " not found" << nl;
        }
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