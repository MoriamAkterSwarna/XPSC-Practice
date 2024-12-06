// *   https://codeforces.com/problemset/problem/1705/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)

#define nn \
    int n; \
    cin >> n

void firebird_solve()
{
    nn;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool flag = false;
    ll cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {

        if (v[i] > 0)
        {
            flag = true;
            cnt += v[i];
        }
        else if (flag && v[i] == 0)
        {

            cnt++;
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