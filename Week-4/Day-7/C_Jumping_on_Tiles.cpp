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

    string s;
    cin >> s;
    char st = s[0];
    char end = s[s.size() - 1];
    map<char, set<int>> m;

    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]].insert(i + 1);
    }

    int val = 0;
    vector<int> cnt;
    if (st == end)
    {
        auto it = *m.find(st);

        for (auto v : it.second)
        {
            cnt.push_back(v);
        }
    }
    else if (st < end)
    {
        auto it = m.find(st);
        while (true)
        {
            for (auto v : it->second)
            {
                cnt.push_back(v);
            }

            if (it->first != st)
            {
                auto previous = m.find(it->first);
                previous--;
                val += it->first - previous->first;
            }
            if (it->first == end)
            {
                break;
            }
            it++;
        }
    }
    else
    {
        auto it = m.find(st);
        while (true)
        {
            for (auto v : it->second)
            {
                cnt.push_back(v);
            }

            if (it->first != st)
            {
                auto n = m.find(it->first);
                n++;
                val += n->first - it->first;
            }
            if (it->first == end)
            {
                break;
            }
            it--;
        }
    }

    cout << val << " " << cnt.size() << endl;
    for (auto x : cnt)
    {
        cout << x << " ";
    }
    cout << nl;
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