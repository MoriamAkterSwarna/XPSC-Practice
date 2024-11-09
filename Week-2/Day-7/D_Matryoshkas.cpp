// ? https://codeforces.com/problemset/problem/1790/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst \
  int t;    \
  cin >> t; \
  while (t--)

void firebird_solve()
{

  ll n;
  cin >> n;

    map<ll, ll> mp;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++)
  {
    ll x;
    cin >> v[i];
    mp[v[i]]++;
  }

  sort(v.begin(), v.end());

  ll result = 0;
  for (ll i = 0; i < n; i++)
  {
    ll tmp = v[i];
    if (mp[tmp] != 0)
    {
      result++;
      while (mp[tmp] > 0)
      {
        mp[tmp]--;
        tmp++;
      }
    }
  }

  cout << result << nl;
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