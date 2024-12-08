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
    long long n;
    cin >> n;
    deque<long long> result;
    for (int k = 0; k <= __lg(n); k++)
    {
        if ((n >> k) & 1)
        {
            long long val = n - (1LL << k);
            if (val > 0)
            {
                result.push_front(val);
            }
        }
    }

    result.push_back(n);
    cout << result.size() << '\n';
    for (auto val : result)
    {
        cout << val << " ";
    }
    cout << '\n';
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