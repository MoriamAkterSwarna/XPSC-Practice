#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
int msb(int n)
{
    if (n == 0)
        return 0;
    int pos = 0;
    while (n > 0)
    {
        pos++;
        n >>= 1;
    }
    return pos;
}
void firebird_solve()

    {
        int n;
        cin >> n;
        vector<int> a(n);

       
        map<int, ll> count;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            count[msb(a[i])]++;
        }

        ll ans = 0;
        
        for (auto &p : count)
        {
            ll c = p.second;
            ans += (c * (c - 1)) / 2; 
        }

        cout << ans << nl;
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