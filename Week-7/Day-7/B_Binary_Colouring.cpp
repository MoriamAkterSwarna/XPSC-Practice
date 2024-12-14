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
    vector<int> result(31, 0);

    for (int i = 0; i < 30; i++)
    {
        if (1LL & (n >> i))
        {
            if (result[i])
            {
                result[i + 1] = 1;
                result[i] = 0;
            }
            else if (i > 0)
            {
                if (result[i - 1] == 1)
                {
                    result[i + 1] = 1;
                    result[i - 1] = -1;
                }
                else
                {
                    result[i] = 1;
                }
            }
            else if (i == 0)
            {
                result[i] = 1;
            }
        }
    }
    cout << 31 << endl;
    for (int i = 0; i < 31; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
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