// ? https://codeforces.com/problemset/problem/1800/C2

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

        priority_queue<int> bonus_amount;
        ll total = 0;

        vector<int> crds(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> crds[i];
        }

        for (int i = 0; i < n; ++i)
        {
            if (crds[i] > 0)
            {
                bonus_amount.push(crds[i]);
            }
            else if (crds[i] == 0 && !bonus_amount.empty())
            {
                total += bonus_amount.top();
                bonus_amount.pop();
            }
        }
        cout << total << "\n";
    }

    return 0;
}