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
    int n, m;
    cin >> n >> m;

    deque<int> dq;

    if (n > m || (n % 2 == 0 && m % 2 == 1))
    {
        cout << "No" << nl;
        return;
    }

    else
    {
        cout << "Yes" << nl;
        if (n % 2 == 1)
        {

            for (int i = 1; i < n; i++)
            {
                dq.push_back(1);
                m--;
            }
            dq.push_back(m);
        }
        else
        {

            for (int i = 1; i < n - 1; i++)
            {
                dq.push_back(1);
                m--;
            }
            // cout << m / 2 << " " << m / 2 << nl;
            dq.push_back(m / 2);
            dq.push_back(m / 2);
        }
    }

    for (auto i : dq)
    {
        cout << i << " ";
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