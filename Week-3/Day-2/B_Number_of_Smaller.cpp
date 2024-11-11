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

    int n, m;
    cin >> n >> m;

    vector<int> values_a(n), values_b(m);
    for (int i = 0; i < n; i++)
        cin >> values_a[i];
    for (int i = 0; i < m; i++)
        cin >> values_b[i];

    int left = 0, right = 0, val_cnt = 0;
    while (right < m)
    {
        if (left < n && values_a[left] < values_b[right])
        {
            val_cnt++;
            left++;
        }
        else
        {
            cout << val_cnt << " ";
            right++;
        }
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