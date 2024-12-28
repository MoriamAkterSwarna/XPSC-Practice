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
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

   
    int wrong = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs(p[i] - (i + 1)) % k != 0)
        {
            wrong++;
        }
    }

    
    if (wrong == 0)
    {
        cout << 0 << nl;
    }
    else if (wrong == 2)
    {
        cout << 1 << nl;
    }
    else
    {
        cout << -1 << nl;
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