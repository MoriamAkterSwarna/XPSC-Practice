#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;

    int idx = 1;
    set<pair<int, int>> set1, set2;
    map<int, set<int>> mp;

    for (int i = 1; i <= q; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int m;
            cin >> m;
            set1.insert({idx, m});
            set2.insert({m, idx});
            mp[m].insert(idx++);

        }
        if (type == 2)
        {
            pair<int, int> pr = *set1.begin();
            set1.erase(set1.begin());
            set2.erase({pr.second, pr.first});
            cout << pr.first << " ";
        }
        if (type == 3)
        {
            pair<int, int> pr = *set2.rbegin();
            int val = *mp[pr.first].begin();
            cout << val << " ";
            
            set2.erase({pr.first, val});
            set1.erase({val, pr.first});
            mp[pr.first].erase(mp[pr.first].begin());
        }

        // for (auto it : set1)
        // {
        //     cout << it.first << " " << it.second << endl;
        // }
        // cout << endl;
        // for (auto it : set2)
        // {
        //     cout << it.first << " " << it.second << endl;
        // }
        // cout << endl;
    }
}