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
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> b(k);
    for (int i = 0; i < k; i++)
    {
        
        bool found = false;
        int key, l = 0, r = n - 1, mid;
        cin >> key;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (key == a[mid])
            {
                found = true;
                break;
            }
            else if (key < a[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (found)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
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