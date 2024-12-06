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
    vector<ll> a(n);
    map<ll, int> freq;

    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    
    vector<ll> v;
    for (auto &p : freq)
    {
        if (p.second >= k)
        {
            v.push_back(p.first);
        }
    }

    if (v.empty())
    {
        cout << -1 << nl;
        return;
    }

    
    sort(v.begin(), v.end());
    ll max_len = 0, curr_len = 1;
    ll start = v[0], curr_start = v[0];
    ll ans_left = v[0], ans_right = v[0];

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1] + 1)
        {
            curr_len++;
        }
        else
        {
            curr_len = 1;
            curr_start = v[i];
        }

        if (curr_len > max_len)
        {
            max_len = curr_len;
            ans_left = curr_start;
            ans_right = v[i];
        }
    }

    cout << ans_left << " " << ans_right << nl;
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