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
    int l, r;
    cin >> l >> r;


    if (l == r)
    {
        for (int i = 2; i * i <= l; i++)
        {
            if (l % i == 0)
            {
                cout << i << " " << l - i << nl;
                return;
            }
        }
        cout << -1 << nl;
        return;
    }

    

    if (r >= 4)
    {
        int target = (r % 2 == 0) ? r : r - 1;
        if (target >= l)
        {
            cout << target / 2 << " " << target / 2 << nl;
            return;
        }
    }

    
    for (int num = l; num <= r; num++)
    {
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                cout << i << " " << num - i << nl;
                return;
            }
        }
    }

    cout << -1 << nl;
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