//  ? https://codeforces.com/problemset/problem/1986/C

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

    string str;
    cin >> str;

    set<int> s;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    string c;
    cin >> c;

    sort(c.begin(), c.end());
    // cout << c << nl;
    int index = 0;
    for (auto i : s)
    {

        str[i - 1] = c[index];
        index++;
    }
    cout << str << nl;
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