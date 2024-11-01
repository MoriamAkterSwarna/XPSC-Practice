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
    vector<string> v;
    while (n--)
    {
        string str;
        cin >> str;
        // cout << str << endl;
        v.push_back(str);
    }

    set<string> s ; 

    for (auto i = v.rbegin(); i != v.rend(); i++)
    {
        if (s.find(*i) == s.end())
        {
            cout << *i << endl;
            s.insert(*i);
        }
    }

    

    return 0;
}