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

    int cnt_zero = 0, cnt_one = 0;

    for (int i = 0; i < n; i++)
    {
        if ( i == 0 || s[i] != s[i - 1])
        {
            if (s[i] == '0')
            {
                cnt_zero++;
            }
            else
            {
                cnt_one++;
            }
        }
    }

    int ans = min(cnt_zero, cnt_one);
    cout << ans << nl;
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