// * === B. Special Permutation === *
// ? ====== https://codeforces.com/problemset/problem/1612/B =======

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
    int n, a, b;
    cin >> n >> a >> b;

    vector<int> p;
    p.push_back(a);


    for (int i = n; i >= 1; i--)
    {
        if (i != a && i != b)
        {
            p.push_back(i);
        }
    }
    p.push_back(b);

    
    if (p.size() == n)
    {
        int leftMin = *min_element(p.begin(), p.begin() + n / 2);
        int rightMax = *max_element(p.begin() + n / 2, p.end());

        if (leftMin == a && rightMax == b)
        {
            for (int x : p)
            {
                cout << x << " ";
            }
            cout << nl;
            return;
        }
    }

    cout << "-1\n";
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