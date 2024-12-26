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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    
    vector<int> pos(1001, -1);
    for (int i = 0; i < n; i++)
    {
        pos[a[i]] = max(pos[a[i]], i + 1); 
    }

    int max_sum = -1;

    for (int x = 1; x <= 1000; x++)
    {
        for (int y = x; y <= 1000; y++)
        {
            if (__gcd(x, y) == 1 && pos[x] != -1 && pos[y] != -1)
            {
                max_sum = max(max_sum, pos[x] + pos[y]);
            }
        }
    }

    cout << max_sum << "\n";
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