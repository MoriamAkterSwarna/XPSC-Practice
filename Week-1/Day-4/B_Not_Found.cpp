#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    vector<char> v;
    for (char c = 'a'; c <= 'z'; c++)
    {
        v.push_back(c);
    }

    // for (char c : v)
    // {
    //     cout << c << " ";
    // }

    for (int i = 0; i < s.size(); i++)
    {
        auto it = find(v.begin(), v.end(), s[i]);
        if (it != v.end())
        {
            v.erase(it);
        }
    }

    if (v.size() == 0)
    {
        cout << "None";
    }
    else
    {
        cout << v.front() << endl;
    }

    return 0;
}