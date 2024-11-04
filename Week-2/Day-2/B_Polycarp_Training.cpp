#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    multiset<int> multi_S;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        multi_S.insert(value);
    }

    int result = 0, problems_Count = 1;
    while (!multi_S.empty())
    {
        auto lb = multi_S.lower_bound(problems_Count);
        if (lb != multi_S.end())
        {
            result++;
            multi_S.erase(lb);
        }
        else
        {
            break;
        }
        problems_Count++;
    }

    cout << result << '\n';

    return 0;
}