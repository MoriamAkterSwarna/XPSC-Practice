// ? https://codeforces.com/problemset/problem/1430/C

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
    vector<int> v;
    vector<int> result;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }

    // using for loop
    for (int i = v.size(); i > 1; i--)
    {

        int summation = v[v.size() - 1] + v[v.size() - 2];
        // cout << v[v.size() - 1] << " " << v[v.size() - 2] << nl;
        result.push_back(v[v.size() - 1]);
        result.push_back(v[v.size() - 2]);
        v.pop_back();
        v.pop_back();
        if (summation % 2 == 1)
        {
            v.push_back(summation / 2 + 1);
        }
        else
        {
            v.push_back(summation / 2);
        }
    }

    //  using while loop

    // while (v.size() > 1)
    // {
    //     int summation = v[v.size() - 1] + v[v.size() - 2];
    //     cout << v[v.size() - 1] << " " << v[v.size() - 2] << nl;
    //     result.push_back(v[v.size() - 1]);
    //     result.push_back(v[v.size() - 2]);

    //     v.pop_back();
    //     v.pop_back();
    //     if (summation % 2 == 1)
    //     {
    //         v.push_back(summation / 2 + 1);
    //     }
    //     else
    //     {
    //         v.push_back(summation / 2);
    //     }
    // }

    cout << v.back() << nl;
    for (int i = 0; i < result.size(); i += 2)
    {
        cout << result[i] << " " << result[i + 1] << nl;
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