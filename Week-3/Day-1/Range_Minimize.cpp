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

    deque<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int ans = 0;

    int min1, min2, min3 = INT_MAX;
    if(n <= 3)
    {
        cout << 0 << nl;
        return;
    }
   
    min1 = (min1, arr[n - 3] - arr[0]);
    min2 = (min2, arr[n - 2] - arr[1]);
    min3 = (min3, arr[n - 1] - arr[2]);
    // cout << min1 << " " << min2 << " " << min3 << nl;

    int tmp = min(min1, min2); 

    ans = min(tmp, min3);
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