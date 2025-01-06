#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){
    int n, product;
    cin >> n >> product;;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    auto ok = [&](long long seconds)
    {
        long long count = 0;
        for (int i = 0; i < n; i++)
        {
            count += (seconds / v[i]);
            if (count >= product)
            {
                return true;
            }
        }
        return false;
    };

    long long left = 1, right = 1e18, mid, result;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (ok(mid))
        {
            result = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << result << nl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
        firebird_solve();
    

    return 0;
}