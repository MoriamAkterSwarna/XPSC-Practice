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
    int n, c;
    cin >> n >> c;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        res[i] = v[i] + (i + 1);
    }
    sort(res.begin(), res.end());

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (res[i] <= c)
        {
            c -= res[i];
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout << cnt << nl;
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