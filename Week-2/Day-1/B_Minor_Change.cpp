#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, t;
    cin >> s >> t;

    int count1 = 0, count2 = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
        {
            count1++;
        }
    }
    cout << count1 << endl;

    return 0;
}