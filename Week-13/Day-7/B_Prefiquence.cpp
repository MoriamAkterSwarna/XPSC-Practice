
// * ===== B. Prefiquence ===== *
// ?  https://codeforces.com/problemset/problem/1968/B =========
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
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;

    int k = 0;
    int pos = 0;

    for (int i = 0; i < n && pos < m; i++)
    {
        if (b[pos] == a[i])
        {
            k++;
            pos++;
        }
        else
        {

            while (pos < m && b[pos] != a[i])
            {
                pos++;
            }

            if (pos < m)
            {
                k++;
                pos++;
            }
            else
                break;
        }
    }

    cout << k << nl;
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