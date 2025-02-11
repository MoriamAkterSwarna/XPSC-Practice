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
    string s;
    cin >> s;
    int n = s.length();
    int ans = n;

    
    for (int x = 0; x < 26; x++)
    {
        char c = char('a' + x);
        int i = 0;
        int cur = 0;

        
        while (i < n)
        {
            int j = i;
            
            while (j < n && (s[j] == c) == (s[i] == c))
            {
                j++;
            }
            
            if (s[i] != c)
            {
                cur = max(cur, j - i);
            }
            i = j;
        }

      
        if (cur == 0)
        {
            ans = 0;
            break;
        }

        
        int val = 0;
        while ((1 << val) <= cur)
        {
            val++;
        }
        ans = min(ans, val);
    }

    cout << ans << nl;
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