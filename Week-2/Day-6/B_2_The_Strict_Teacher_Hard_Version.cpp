// ? https://codeforces.com/problemset/problem/2005/B2

#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)

void firebird_solve()
{
    int cells_n, teachers_m, queries_q;
    vector<int> teachers;
    cin >> cells_n >> teachers_m >> queries_q;

    for (int i = 0; i < teachers_m; i++)
    {
        int teacher;
        cin >> teacher;
        teachers.push_back(teacher);
    }

    sort(teachers.begin(), teachers.end());
    while (queries_q--)
    {
        int query;
        cin >> query;

        if (query < teachers[0])
        {
            cout << teachers[0] - 1 << nl;
        }
        else if (query > teachers.back())
        {
            cout << cells_n - teachers.back() << nl;
        }
        else
        {
            auto it = lower_bound(teachers.begin(), teachers.end(), query);

            int right = cells_n;
            if (it != teachers.end())
            {
                right = *it;
            }
            int left = 1;
            if (it != teachers.begin())
            {
                left = *(--it);
            }

            cout << (right - left) / 2 << nl;
        }
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