#include <bits/stdc++.h>
using namespace std;

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

        string s;
        int start = 0, end = 0;
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            char c;
            cin >> c;
            s.push_back(c);
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                start = i;
                break;
            }
        }

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                end = i;
                break;
            }
        }

        cout << (end - start) + 1 << endl;

        
    }

    return 0;
}