#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){
    ll val_a = 0, val_b, val_c, val_d, position = 1, bit_b, bit_c, bit_d, mask = 1;
    cin >> val_b >> val_c >> val_d;
    for (ll i = 0; i < 62; i++)
    {
        if (val_b & mask)
            bit_b = 1;
        else
            bit_b = 0;
        if (val_c & mask)
            bit_c = 1;
        else
            bit_c = 0;
        if (val_d & mask)
            bit_d = 1;
        else
            bit_d = 0;
        if ((bit_b && (!bit_c) && (!bit_d)) || ((!bit_b) && bit_c && bit_d))
        {
            position = 0;
            break;
        }
        if (bit_b && bit_c)
        {
            val_a += (1ll - bit_d) * mask;
        }
        else
        {
            val_a += bit_d * mask;
        }
        mask <<= 1;
    }
    if (position)
    {
        cout << val_a << nl;
    }
    else
    {
        cout << -1 << nl;
    }
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