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
    ll n, m;
    cin >> n >> m;

    ll left = max(0ll, n - m), right = m + n;
    if (left == right)
        cout << left << endl;
    for (int i = 30; i >= 0; i--)
    {
        if ((right >> i & 1) && !(left >> i & 1))
        {
            cout << (left | (ll)pow(2ll, i + 1) - 1) << endl;
            break;
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