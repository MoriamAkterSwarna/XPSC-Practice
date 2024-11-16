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

    ll n;
    cin >> n;
    string s;

    cin >> s;
    vector<ll> df(n);
    ll summation(0);
    for (ll i = 0; i < n; i++)
    {
        ll cur = 0, mx = 0;
       
        if (s[i] == 'L')
        {
            cur = i;
        }
        else
        {
            cur = n - i - 1;
        }
        
        if (i > (n - i - 1))
        {
            mx = i;
        }
        else
        {
            mx = n - i - 1;
        }
        summation += cur;
        ll diff = mx - cur;
        df[i] = diff;
    }

    sort(df.rbegin(), df.rend());

    for (ll i = 0; i < n; i++)
    {
        summation += df[i];
        cout << summation << " ";
    }
    cout << endl;
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