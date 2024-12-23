#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)

ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}


void firebird_solve(){
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;


    ll x = (n / a) * p, y = (n / b) * q, overlap = (n / LCM(a, b));
    ll result = ((x + y) - (overlap * (p + q))) + (overlap * max(p, q));

    cout << result << '\n';
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
        firebird_solve();
    

    return 0;
}