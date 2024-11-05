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

        int wheels;
        cin >> wheels;
        vector<int> ai(wheels);

        for (int i = 0; i < wheels; i++)
        {
            cin >> ai[i];
        }

        vector<int> bi_v;
        for (int i = 0; i < wheels; i++)
        {
            int bi;
            string bi_s;
            cin >> bi >> bi_s;
            int tmp;
            for (char code : bi_s)
            {

                if (code == 'U')
                {

                    tmp = ai[i] - 1;
                    if (tmp < 0)
                        tmp = 9;
                    ai[i] = tmp;
                }
                else if (code == 'D')
                {
                    tmp = ai[i] + 1;
                    if (tmp > 9)
                        tmp = 0;
                    ai[i] = tmp;
                }
            }

            bi_v.push_back(ai[i]);
        }

        for (auto x : bi_v)
        {
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}