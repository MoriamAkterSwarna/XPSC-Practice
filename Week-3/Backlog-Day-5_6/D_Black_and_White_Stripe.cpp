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

    ll n, k;
    cin >> n >> k;

    string a;
    cin >> a;

    ll recolor = k;
    ll curr = 0;

    for (ll i = 0; i < k; i++)
    {
        // cout << a[i] << " ";
        if (a[i] == 'W')
        {
            curr++;
        }
    }

    recolor = curr;

    for (ll i = k; i < n; i++)

    {
        if (a[i] == 'W')
        {
            curr++;
        }
        if (a[i - k] == 'W')
        {

            curr--;
        }

        recolor = min(recolor, curr);
    }

    cout << recolor << nl;
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
