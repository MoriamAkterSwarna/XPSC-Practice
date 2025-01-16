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
    int x;
    cin >> x;
    int count = 0;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            count++;
            if (i != x / i)
            {
                count++;
            }
        }
    }
    cout << count << nl;
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