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
    string s;
    cin >> s;

    
    int diff = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
            diff++;
    }

    vector<int> ans(n + 1, 0);
    for (int x = 0; x <= n; x++)
    {
        
        int free = x - diff;
        if (free < 0)
            continue;

        
        if (n % 2 == 0)
        {
            if (free % 2 == 0 && free <= n - 2 * diff)
                ans[x] = 1;
        }
        else
        {
            if (free <= n - 2 * diff)
                ans[x] = 1;
        }
    }

    for (int i = 0; i <= n; i++)
    {
        cout << ans[i];
    }
    cout << nl;
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