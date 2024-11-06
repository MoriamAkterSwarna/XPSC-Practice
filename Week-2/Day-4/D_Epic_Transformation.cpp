#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        ll n;
        cin >> n;
        vector<ll> a(n);
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        
        ll mx = 0; 
        for(auto i : mp){
            mx = max(mx, i.second);
        }

        ll min_len = 0;

         if( n %2 == 0){
            min_len = 0;
        }else{
            min_len = 1;
        }

        // cout << "mx: " << mx << endl;
        if(mx > (n+1)/2 ){
            min_len = 2*mx - n; 
        }

        cout << min_len << endl;

        
    }

    return 0;
}