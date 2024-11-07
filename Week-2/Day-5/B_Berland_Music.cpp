#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        vector<int> v1(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v1[i];
        }

        string s;
        cin >> s;

        vector<pair<int, int>> rt(n);
        for (int i = 0; i < n; ++i)
        {
            rt[i] = {v1[i], i};
        }

        sort(rt.begin(), rt.end());

        vector<int> res(n);

        vector<int> lk, dis_lk;
        for (int i = 0; i < n; ++i)
        {
            if (s[rt[i].second] == '1')
            {
                lk.push_back(rt[i].second);
            }
            else
            {
                dis_lk.push_back(rt[i].second);
            }
        }

        int crnt_rt = 1;
        for (int idx : dis_lk)
        {
            res[idx] = crnt_rt++;
        }

        for (int idx : lk)
        {
            res[idx] = crnt_rt++;
        }

        for (int i = 0; i < n; ++i)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}