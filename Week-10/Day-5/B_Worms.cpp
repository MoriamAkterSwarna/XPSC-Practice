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
    vector<int> pref(n + 1, 0);

    
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        pref[i] = pref[i - 1] + x;
    }

    int m;
    cin >> m;
    while (m--)
    {
        int q;
        cin >> q;

        int pos = lower_bound(pref.begin(), pref.end(), q) - pref.begin();
        cout << pos << nl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    firebird_solve();

    return 0;
}