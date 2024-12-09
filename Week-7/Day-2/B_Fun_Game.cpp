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
    string str, t;
    cin >> str >> t;
    if (str == t)
    {
        cout << "YES" << '\n';
        return;
    }

    int position = -1;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            position = i;
            break;
        }
    }

    if (position != -1)
    {
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (str[i] != t[i])
            {
                if (position > i)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    else
    {
        cout << "NO" << '\n';
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