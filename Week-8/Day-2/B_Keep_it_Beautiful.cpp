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
    int q;
    cin >> q;

    vector<int> a;
    string ans;
    int first = -1, last = -1;
    bool descended = false;

    while (q--)
    {
        int x;
        cin >> x;

        if (a.empty())
        {
            a.push_back(x);
            first = x;
            last = x;
            ans += '1';
        }
        else if (!descended)
        {
            if (x >= last)
            {
                a.push_back(x);
                last = x;
                ans += '1';
            }
            else if (x <= first)
            {
                a.push_back(x);
                last = x;
                descended = true;
                ans += '1';
            }
            else
            {
                ans += '0';
            }
        }
        else
        {
            if (x >= last && x <= first)
            {
                a.push_back(x);
                last = x;
                ans += '1';
            }
            else
            {
                ans += '0';
            }
        }
    }

    cout << ans << nl;
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