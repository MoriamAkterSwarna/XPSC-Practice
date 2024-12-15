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

    int minScore = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int maxDiff = 0;
        if (i > 0)
        {
            maxDiff = max(maxDiff, abs(a[i] - a[i - 1]));
        }
        if (i < n - 1)
        {
            maxDiff = max(maxDiff, abs(a[i] - a[i + 1]));
        }
        minScore = min(minScore, maxDiff);
    }

    cout << minScore << endl;
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