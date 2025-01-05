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
    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int luchu_height;
        cin >> luchu_height;

        auto upper = upper_bound(heights.begin(), heights.end(), luchu_height);
        auto lower = lower_bound(heights.begin(), heights.end(), luchu_height);

        // For shorter chimp
        if (lower == heights.begin())
        {
            cout << "X ";
        }
        else
        {
            cout << heights[lower - heights.begin() - 1] << " ";
        }

        // For taller chimp
        if (upper == heights.end())
        {
            cout << "X";
        }
        else
        {
            cout << *upper;
        }
        cout << nl;
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