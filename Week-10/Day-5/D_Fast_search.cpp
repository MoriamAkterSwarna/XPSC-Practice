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

    sort(a.begin(), a.end());

    int k;
    cin >> k;
    while (k--)
    {
        int l, r;
        cin >> l >> r;

        
        int left = lower_bound(a.begin(), a.end(), l) - a.begin();
        
        int right = upper_bound(a.begin(), a.end(), r) - a.begin();

        cout << right - left << " ";
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