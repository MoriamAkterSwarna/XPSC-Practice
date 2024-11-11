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

    int left = 0, right = 0;
    long long result = 0;

    while (left < n && right < m)
    {
        int current_val = values_a[left], count1 = 0, count2 = 0;

        while (left < n && values_a[left] == current_val)
        {
            count1++;
            left++;
        }
        while (right < m && current_val > values_b[right])
        {

            right++;
        }
        while (right < m && values_b[right] == current_val)
        {
            count2++;
            right++;
        }

        result += (1LL * count1 * count2);
    }
    cout << result << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    firebird_solve();

    return 0;
}