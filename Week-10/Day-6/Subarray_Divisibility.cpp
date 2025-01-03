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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<ll, ll> freq;
    ll sum = 0;
    freq[0] = 1;
    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        sum = (((sum + a[i]) % n) + n) % n;
        cnt += freq[sum];
        freq[sum]++;
    }

    cout << cnt << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    firebird_solve();

    return 0;
}