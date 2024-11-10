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

    string str;

    cin >> str;

    int l = 0, r = n - 1, ans = n;

    while (l <= r)
    {
        if (str[l] == str[r])
        {
            break;
        }
        else
        {
            ans = ans - 2;
            l++;
            r--;
        }
    }
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