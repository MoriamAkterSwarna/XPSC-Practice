#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll> divi;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divi.push_back(i);
            if ((n / i) != i)
            {
                divi.push_back(n / i);
            }
        }
    }

    sort(divi.begin(), divi.end());

    if (divi.size() < k)
    {
        cout << -1 << nl;
    }
    else
    {
        cout << divi[k - 1] << nl;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
        firebird_solve();
    

    return 0;
}