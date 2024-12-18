#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)

ll cnt(vector<ll> &v)
{
    ll inv = 0;
    ll ones = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
        {
            ones++;
        }
        else
        {
            inv += ones;
        }
    }
    return inv;
}
void firebird_solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    
    ll orig = cnt(a);
    ll maxInv = orig;

    
    vector<ll> temp = a;
    for (int i = 0; i < n; i++)
    {
        if (temp[i] == 0)
        {
            temp[i] = 1;
            maxInv = max(maxInv, cnt(temp));
            temp[i] = 0;
            break;
        }
    }

    
    temp = a;
    for (int i = n - 1; i >= 0; i--)
    {
        if (temp[i] == 1)
        {
            temp[i] = 0;
            maxInv = max(maxInv, cnt(temp));
            break;
        }
    }

    cout << maxInv << "\n";
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