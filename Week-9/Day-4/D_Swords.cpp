#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
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

    ll x = *max_element(a.begin(), a.end());
    vector<ll> diff;

    for (int i = 0; i < n; i++)
    {
        if (x - a[i] > 0)
        {
            diff.push_back(x - a[i]);
        }
    }

    ll z = diff[0];
    for (int i = 1; i < diff.size(); i++)
    {
        z = gcd(z, diff[i]);
    }

    ll y = 0;
    for (int i = 0; i < n; i++)
    {
        y += (x - a[i]) / z;
    }

    cout << y << " " << z << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
        firebird_solve();
    

    return 0;
}