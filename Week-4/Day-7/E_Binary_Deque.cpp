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

    int n, s;
    cin >> n >> s;

    vector<int> a(n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
    }
    if (total < s)
    {
        cout << -1 << nl;
        return;
    }

    vector<int> last(n + 1); 
    int last_val = n;
    for (int i = n - 1; i >= 0; i--)
    {
        last.push_back(a[i]);
        last[i] = last_val;
        if (a[i] == 1)
        {
            last_val = i;
        }
    }

    int res = INT_MAX, current = 0, l = 0, r = 0;
    deque<int> q;

    while (r < n)
    {
        q.push_back(a[r]);
        current += a[r];
        while (q.size() > 0 && current > s)
        {
            current -= q.front();
            q.pop_front();
            l++;
        }
        if (current == s)
        {
            res = min(res, l + (n - last[r]));
        }
        r++;
    }
    cout << res << nl;
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