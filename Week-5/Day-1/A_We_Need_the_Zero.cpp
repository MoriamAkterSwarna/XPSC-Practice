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
    int n, XOR = 0;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        XOR ^= a[i];
    }
    // cout << XOR << nl;
    vector<int> b(n);
    int bXOR = 0;
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i] ^ XOR;
        bXOR ^= b[i];
    }
    if (bXOR == 0)
    {
        cout << XOR << " ";
    }
    else
    {
        cout << -1 << " ";
    }
    cout << nl;
    // cout << XOR << " " << bXOR << nl;
    // for (auto i : b)
    // {
    //     cout << i << " ";
    // }
    // cout << nl;
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