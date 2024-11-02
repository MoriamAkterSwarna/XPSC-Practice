#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string b;
        cin >> n >> b;

        set<char> chars(b.begin(), b.end());

        // for (auto i : chars)
        // {
        //     cout << i  ;
        // }
        // cout << endl;

        string r(chars.begin(), chars.end());

        unordered_map<char, char> mp;
        int m = r.size();
        for (int i = 0; i < m; ++i)
        {
            mp[r[i]] = r[m - i - 1];
            // cout << r[i] << " " << r[m - i - 1] << endl;
        }

        // for(auto i:mp)
        // {
        //     cout<<i.first<<" "<<i.second<<endl;
        // }

        string s;
        for (char ch : b)
        {
            // cout << ch << " " << mp[ch] << endl;
            s += mp[ch];
        }

        cout << s << endl;
    }
    return 0;
}
