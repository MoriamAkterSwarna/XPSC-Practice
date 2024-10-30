#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int s, t;
    cin >> s >> t;

    int tripletsCount = 0;
    for (int a = 0; a <= s; a++)
    {
        for (int b = 0; b <= s; b++)
        {
            for (int c = 0; c <= s; c++)
            {
                if (a + b + c <= s && a * b * c <= t)
                {
                    tripletsCount++;
                }
            }
        }
    }

    cout << tripletsCount << endl;

    return 0;
}