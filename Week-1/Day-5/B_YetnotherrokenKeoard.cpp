#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        int c1 = 0, c2 = 0;
        deque<char> dq;

        for (int i = s.size() - 1; i >= 0; i--)
        {

            if (s[i] == 'B')
            {
                c1++;
                continue;
            }
            if (s[i] == 'b')
            {
                c2++;
                continue;
            }
            if (c2 && islower(s[i]))
            {
                c2--;
                continue;
            }

            if (c1 && isupper(s[i]))
            {
                c1--;
                continue;
            }

            dq.push_front(s[i]);
        }

        for (auto x : dq)
        {
            cout << x;
        }
        cout << endl;
    }

    return 0;
}
