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

    vector<int> a(n), b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }
    for (int i = 0; i < n; i++)
    {
        int x = abs(a[i] - i);
        if (x == 0)
        {
            continue;
        }
        b.push_back(x);
    }

    int result = 1;
    result = b[0];

    for (auto x : b)
    {
        result = __gcd(result, x);
    }
    cout << result << nl;
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