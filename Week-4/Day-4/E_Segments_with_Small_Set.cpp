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
    ll k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0;
    ll result = 0;
    int cnt = 0;
    map<int, int> mp;

    while (r < n)
    {
        mp[a[r]]++;
        if (mp[a[r]] == 1)
        {
            cnt++;
        }

        while (cnt > k)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
            {
                cnt--;
            }
            l++;
        }

        result += r - l + 1;
        r++;
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