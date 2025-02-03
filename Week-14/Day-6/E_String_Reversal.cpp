#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define yc cout << "YES" << nl;
#define nc cout << "NO" << nl;
#define ys cout << "Yes" << nl;
#define ns cout << "No" << nl;
#define nn \
    int n; \
    cin >> n;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void firebird_solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    string r = s;
    reverse(r.begin(), r.end());

    // cout << r << nl;
    // cout << s << nl;

    map<char, vector<int>> pos_s, pos_r;
    for (int i = 0; i < n; i++)
    {
        pos_s[s[i]].push_back(i);
        pos_r[r[i]].push_back(i);
    }

    // for (auto x : pos_s)
    // {
    //     vector<int> v = x.second;
    //     cout << x.first << " : ";
    //     for (auto y : v)
    //     {
    //         cout << y << " ";
    //     }
    //     cout << nl;
    // }
    // cout << nl;

    // for (auto x : pos_r)
    // {
    //     vector<int> v = x.second;
    //     cout << x.first << " : ";
    //     for (auto y : v)
    //     {
    //         cout << y << " ";
    //     }
    //     cout << nl;
    // }
    // cout << nl;

    vector<int> perm(n);
    for (char c = 'a'; c <= 'z'; c++)
    {
        for (int i = 0; i < pos_s[c].size(); i++)
        {
            perm[pos_r[c][i]] = pos_s[c][i];
        }
    }
    // for (auto x : perm)
    // {
    //     cout << x << " ";
    // }
    // cout << nl;

    pbds<int> s1;
    ll ans = 0;
    for (int i = n-1; i >=0; i--)
    {
        ans += s1.order_of_key(perm[i]);
        s1.insert(perm[i]);
    }
    cout << ans << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    firebird_solve();

    return 0;
}