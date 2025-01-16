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

    map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {

        for (int j = 2; j * j <= v[i]; j++)
        {
            if (v[i] % j == 0)
            {
                while (v[i] % j == 0)
                {
                    cnt[j]++;
                    v[i] /= j;
                }
            }
        }
        if (v[i] > 1)
        {
            cnt[v[i]]++;
        }
    }

    bool ok = true;

    for (auto [key, value] : cnt)
    {
        if (value % n != 0)
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
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