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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> bit_cnts(30, 0);
    for (int i = 0; i < n; i++)
    {
        for (int bit = 0; bit < 30; bit++)
        {
            if (a[i] & (1 << bit))
            {
                bit_cnts[bit]++;
            }
        }
    }

    vector<int> answers;
    for (int k = 1; k <= n; k++)
    {
        bool possible = true;
        for (int bit = 0; bit < 30; bit++)
        {
            if (bit_cnts[bit] % k != 0)
            {
                possible = false;
                break;
            }
        }
        if (possible)
            answers.push_back(k);
    }

    for (int i = 0; i < answers.size(); i++)
    {
        cout << answers[i] << (i == answers.size() - 1 ? "\n" : " ");
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