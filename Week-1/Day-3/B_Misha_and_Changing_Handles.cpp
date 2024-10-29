#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  map<string, string> ans, has;
  for (int i = 0; i < n; i++)
  {
    string old_pass, new_pass;
    cin >> old_pass >> new_pass;

    if (has.find(old_pass) != has.end())
    {

      string tmp = has[old_pass];

      ans[tmp] = new_pass;
      has.erase(old_pass);
      has[new_pass] = tmp;
    }

    else
    {
      ans[old_pass] = new_pass;
      has[new_pass] = old_pass;
    }
  }

  cout << ans.size() << endl;

  for (auto i : ans)
  {
    cout << i.first << " " << i.second << endl;
  }

  return 0;
}
