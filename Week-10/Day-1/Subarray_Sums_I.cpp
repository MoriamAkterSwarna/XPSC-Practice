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
    ll x;
    cin >> n >> x;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll sum = 0;
    int count = 0;
    int left = 0;

    for (int right = 0; right < n; right++)
    {
        sum += arr[right];

        while (sum > x && left <= right)
        {
            sum -= arr[left];
            left++;
        }

        if (sum == x)
        {
            count++;
        }
    }

    cout << count << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    firebird_solve();

    return 0;
}