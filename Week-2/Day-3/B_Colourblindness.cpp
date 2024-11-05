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

        vector<char> v1, v2;
        for (int i = 0; i < n; i++)
        {
            char c1;
            cin >> c1;
            v1.push_back(c1);
        }

        for (int i = 0; i < n; i++)
        {
            char c2;
            cin >> c2;
            v2.push_back(c2);
        }
        bool flag = false;
        for (int c = 0; c < n; c++)
        {
            if (v1[c] == v2[c])
            {
                flag = true;
            }
            else
            {
                if (v1[c] == 'B' && v2[c] == 'G' || v1[c] == 'G' && v2[c] == 'B')
                {
                    flag = true;
                    
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}