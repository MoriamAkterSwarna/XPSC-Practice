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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> b(n);
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        v[i] -= b[i];
        mx = max(mx, v[i]);
    }
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if (mx != v[i] && b[i])
            ok = false;
    }
    if (ok)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
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