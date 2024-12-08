#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
const int B = 30;
void firebird_solve()
{
    int n, K;
    cin >> n >> K;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> bits(B + 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = B; j >= 0; j--)
        {
            if ((a[i] >> j) & 1)
            {
                bits[j]++;
            }
        }
    }

    int result = 0;
    for (int j = B; j >= 0; j--)
    {
        if (bits[j] == n)
        {
            result += (1LL << j);
        }
        else
        {
            int need = n - bits[j];
            if (K >= need)
            {
                result += (1LL << j);
                K -= need;
            }
        }
    }

    cout << result << '\n';
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