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
    bool flag = false;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        int sum = 0;
        for (int k = 0; k < n; k++)
        {
            if ((mask >> k) & 1)
            {
                sum += a[k];
            }
            else
            {
                sum -= a[k];
            }
        }

        if (sum % 360 == 0)
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
        firebird_solve();
    

    return 0;
}