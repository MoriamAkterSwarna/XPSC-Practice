#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, set<int>> mpp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mpp[x].insert(i);
        }

        for (int i = 1; i <= m; i++)
        {
            int left_value, right_value;
            cin >> left_value >> right_value;
            if (mpp.find(left_value) == mpp.end() || mpp.find(right_value) == mpp.end())
            {
                cout << "NO" << endl;
            }
            else
            {
                int left_value_start, right_value_end;
                left_value_start = *mpp[left_value].begin();
                right_value_end = *mpp[right_value].rbegin();

                if (left_value_start < right_value_end)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}