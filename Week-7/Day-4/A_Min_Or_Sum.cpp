#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)

void firebird_solve(){
    ll n, ans = 0;
    cin >> n;
    map<ll, ll> mp;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        for (ll j = 0; j <= 31; j++){
            if((a[i] >> j) & 1){
                mp[j]++;
            }
        }
    }
    for (ll j = 0; j <= 31; j++)
        if (mp[j] >= 1)
            ans += pow(2, j);
    cout << ans << nl;

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