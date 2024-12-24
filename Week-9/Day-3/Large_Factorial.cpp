#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)

const int MOD = 1e9 + 7;

void firebird_solve(){
    int n, ans = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ans = (1LL * ans % MOD * i % MOD) % MOD;
    }
    cout << ans << '\n';
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