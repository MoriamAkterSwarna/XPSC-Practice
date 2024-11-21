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

    string ans = "";

    vector<char> v(26);
    for (int i = 0; i < 26; i++)
    {
        v[i] = 'a' + i;
    }

    for (int i = n - 1; i >= 0;)
    {
        if (s[i] == '0')
        {
            // cout << s[i-2] - '0' << " " << s[i-1] - '0' << nl;
            int number = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
            // cout << number << nl;
            ans += v[number - 1];
            i -= 3;
        }
        else
        {
            ans += v[s[i] - '0' - 1];
            i--;
        }
    }

    reverse(ans.begin(), ans.end());

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