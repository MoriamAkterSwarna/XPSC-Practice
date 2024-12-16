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

    int ans = INT_MAX;
    for (char c = 'a'; c <= 'z'; c++)
    {
        string temp = s;
        int count = 0;
        bool possible = true;
        int l = 0, r = n - 1;

        while (l < r)
        {
            if (temp[l] == temp[r])
            {
                l++;
                r--;
                continue;
            }
            if (temp[l] == c && temp[r] != c)
            {
                count++;
                l++;
            }
            else if (temp[l] != c && temp[r] == c)
            {
                count++;
                r--;
            }
            else if (temp[l] == c && temp[r] == c)
            {
                count += 2;
                l++;
                r--;
            }
            else
            {
                possible = false;
                break;
            }
        }

        if (possible)
        {
            ans = min(ans, count);
        }
    }

    cout << (ans == INT_MAX ? -1 : ans) << nl;
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