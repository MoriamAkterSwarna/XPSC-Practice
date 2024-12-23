#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll G1 = 0, G2 = 0;
    for (int i = 0; i < n; i += 2)
    {
        G1 = __gcd(G1, a[i]);
    }
    for (int i = 1; i < n; i += 2)
    {
        G2 = __gcd(G2, a[i]);
    }

    ll result = 0;
    bool ok = true;
    for (int i = 1; i < n; i += 2)
    {
        if (a[i] % G1 == 0)
        {
            ok = false;
        }
    }

    if (ok)
    {
        result = G1;
    }
    else
    {
        ok = true;
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] % G2 == 0)
            {
                ok = false;
            }
        }
        if (ok)
        {
            result = G2;
        }
    }

    cout << result << '\n';

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tst{
        firebird_solve();
    }

    return 0;
}