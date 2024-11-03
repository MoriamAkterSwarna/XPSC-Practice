#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    vector<int> result;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != x)
        {

            result.push_back(v[i]);
        }
    }
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << "\n";

        return 0;
}