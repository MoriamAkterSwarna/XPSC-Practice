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

    ll a, b, n;
    cin >> a >> b >> n;

    vector<ll> tools(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> tools[i];
    }
    ll result = 0;
    for(ll i = 0; i < tools.size(); i++){
        if(tools[i] > a-1){
           result+= a-1; 
        }else{
            result+= tools[i]; 
        }
    }
    result+= b;
    cout << result << nl;
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