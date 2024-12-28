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

    // Convert edge cases
    if (s[0] == 's')
        s[0] = '.';
    if (s[n - 1] == 'p')
        s[n - 1] = '.';

    bool found_p = false;
    bool found_s = false;

    for (char c : s)
    {
        if (c == 'p')
            found_p = true;
        if (c == 's')
            found_s = true;
    }

    if (found_p && found_s)
    {
        cout << "NO" << nl;
    }
    else
    {
        cout << "YES" << nl;
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