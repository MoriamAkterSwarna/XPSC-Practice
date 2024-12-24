#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
const int MOD = 1e9 + 7;

int power(int x, int n)
{
    int ans = 1 % MOD;
    while (n)
    {
        if (n & 1)
        {
            ans = (1LL * ans % MOD * x % MOD) % MOD;
        }
        x = 1LL * x * x % MOD;
        n >>= 1;
    }

    return ans;
}

void firebird_solve()
{
    int x, n;
    cin >> x >> n;
    cout << power(x, n) << '\n';
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