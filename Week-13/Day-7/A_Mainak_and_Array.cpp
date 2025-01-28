// * ========= A. Mainak and Array ==========

// * Problem: https://codeforces.com/problemset/problem/1726/A

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

        int mx = a[n - 1] - a[0];

    for (int i = 1; i < n; i++)
    {
        mx = max(mx, a[n - 1] - a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        mx = max(mx, a[i] - a[0]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        mx = max(mx, (a[i] - a[i + 1]));
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