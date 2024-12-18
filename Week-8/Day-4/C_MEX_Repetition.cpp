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

    vector<ll> a(n + 1);
    vector<bool> present(n + 1, false);

    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        present[a[i]] = true;
    }

    
    ll mex = 0;
    while (present[mex])
        mex++;
    a[n] = mex;

    
    k = k % (n + 1);

    
    for (int i = 0; i < n; i++)
    {
        cout << a[(n + 1 - k + i) % (n + 1)] << " ";
    }
    cout << nl;
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