#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    long long totalSum = 0;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        totalSum = totalSum + v[i];
    }

    if (totalSum % 2 == 0)
    {
        cout << totalSum << endl;
    }
    else
    {
        long long odd = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != 0)
            {
                odd = min(odd, (long long)v[i]);
            }
        }
        cout << totalSum - odd << endl;
    }

    return 0;
}