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

    ll a, b, c;
    cin >> a >> b >> c;

    
    if ((a + b + c) % 2)
    {
        cout << -1 << nl;
        return;
    }

    
    ll total = (a + b + c) / 2;
    ll sum = a + b;

    
    cout << min(total, sum) << nl;

    // vector<int> p(3);
    // cin >> p[0] >> p[1] >> p[2];

    // int mx = -1;

    
    // for (int i = 0; i <= min(p[0], p[1]); i++)
    // {
    //     for (int j = 0; j <= min(p[0], p[2]); j++)
    //     {
    //         for (int k = 0; k <= min(p[1], p[2]); k++)
    //         {
                
    //             if ((p[0] - i - j) % 2 != 0 || p[0] < i + j)
    //                 continue;

                
    //             if ((p[1] - i - k) % 2 != 0 || p[1] < i + k)
    //                 continue;

                
    //             if ((p[2] - k - j) % 2 != 0 || p[2] < k + j)
    //                 continue;

                
    //             mx = max(mx, i + j + k);
    //         }
    //     }
    // }

    // cout << mx << nl;
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