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
    int a, b;
    cin >> a >> b;

    // * Way 1

    // int XOR = a ^ b;
    // cout << XOR << nl;

    // * Way 2
    int x = a & b;
    int XOR = (a ^ x) + (b ^ x);
    cout << XOR << nl;
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