#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)

#define max_val 1e9+5 
void firebird_solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(q);
    for (auto &i : a)
    {
        cin >> i;
    }
    for (auto &i : b)
    {
        cin >> i;
    }
    vector<int> idx(35, max_val);
    for (int i = 0; i < q; i++)
    {
        if (idx[b[i]] == max_val)
        {
            idx[b[i]] = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int first = max_val;
        for (int j = 1; j <= 30; j++)
        {
            if (a[i] % (1 << j) == 0)
            {
                first = min(first, idx[j]);
            }
        }
        while (first < q)
        {
            a[i] += (1 << (b[first] - 1));
            int x = b[first] - 1;
            int mx = max_val;
            while (x >= 0)
            {
                if (idx[x] != max_val && idx[x] > first)
                {
                    mx = min(mx, idx[x]);
                }
                x--;
            }
            first = mx;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " \n"[i == n - 1];
    }
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