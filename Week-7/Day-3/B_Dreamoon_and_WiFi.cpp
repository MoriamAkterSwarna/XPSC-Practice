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

    string str1, str2;
    cin >> str1 >> str2;
    int t = 0, d = 0, w = 0;

    for (int i = 0; i < str1.length(); i++)
    {
        d += str2[i] == '?';

        if (str1[i] == '+')
        {

            t += 1;
        }
        else
        {
            t -= 1;
        }

        if (str2[i] == '+')
            t -= 1;
        else if (str2[i] == '-')
            t += 1;
    }

    for (int i = 0; i < (1 << d); i++)
    {
        int c = t, k = i;
        for (int j = 1; j <= d; j++)
        {
            if (k & 1)
            {
                c += 1;
            }
            else
            {
                c -= 1;
            }
            k /= 2;
        }
        if (c == 0)
        {
            w += 1;
        }
        else
        {
            w += 0;
        }
    }

    d = 1 << d;
    cout.precision(12);
    cout << fixed << w / double(d) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    firebird_solve();

    return 0;
}