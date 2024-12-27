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
    int n;
    cin >> n;
    string s;
    cin >> s;

  
    int a = 0, b = 0, c = 0, d = 0;
    for (char ch : s)
    {
        a += (ch == 'A');
        b += (ch == 'B');
        c += (ch == 'C');
        d += (ch == 'D');
    }

   
    int cnt = min(a, n) + min(b, n) + min(c, n) + min(d, n);
    cout << cnt << nl;
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