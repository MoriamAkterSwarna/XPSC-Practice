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
    vector<int> pos(n + 1);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        pos[v[i]] = i;
    }

    int res = 1;
    for (int i = 2; i <= n; ++i)
    {
        if (pos[i] < pos[i - 1])
        {
            res++;
        }
    }

    cout << res << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    firebird_solve();

    return 0;
}