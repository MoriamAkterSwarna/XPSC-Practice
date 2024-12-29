#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)

ll minDifference(vector<ll> &a, int idx, ll sum1, ll sum2)
{
    if (idx < 0)
    {
        return abs(sum1 - sum2);
    }

    return min(
        minDifference(a, idx - 1, sum1 + a[idx], sum2),
        minDifference(a, idx - 1, sum1, sum2 + a[idx]));
}

void firebird_solve(){
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << minDifference(a, n - 1, 0, 0) << nl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
        firebird_solve();
    

    return 0;
}