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

    int n, XOR = 0;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        XOR ^= a[i];
    }

    // cout << XOR << nl;
    sort(a.begin(), a.end());
    int ans = XOR;

    for (int i = 0; i < n; i++)
    {

        int curr = (XOR ^ a[i]);
        // cout << curr << nl;

        ans = min(curr, ans);
    }
    cout << ans << nl;
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