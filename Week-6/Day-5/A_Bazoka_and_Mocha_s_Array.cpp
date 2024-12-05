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
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // for(auto i : a){
    //     cout << i << " ";
    // }
    // cout << nl;

    vector<int> b = a;
    sort(b.begin(), b.end());

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        vector<int> c(a.begin() + i, a.end());

        c.insert(c.end(), a.begin(), a.begin() + i);

            if (c == b)
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << "Yes" << nl;
    }
    else
    {
        cout << "No" << nl;
    }
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