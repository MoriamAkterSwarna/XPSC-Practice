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

    deque<deque<int>> sq(n, deque<int>(n - 1));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - 1; ++j)
        {
            cin >> sq[i][j];
        }
    }

    deque<int> result;

    int first = sq[0][0];
    for (int i = 1; i < n; i++)
    {
        if (sq[i][0] == first)
        {
            result.push_back(first);
            break;
        }
    }

    if (result.size() == 0)
    {
        result.push_back(sq[1][0]);
        for (int i = 0; i < n; i++)
        {
            if (sq[i][0] == first)
            {
                for (int j = 0; j < n - 1; j++)
                {

                    result.push_back(sq[i][j]);
                }
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (sq[i][0] != first)
            {
                for (int j = 0; j < n - 1; j++)
                {

                    result.push_back(sq[i][j]);
                }
                break;
            }
        }
    }

    for(int i = 0; i < result.size(); i++)
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