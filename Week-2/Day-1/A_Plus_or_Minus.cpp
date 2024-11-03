#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int sum = a + b;
        int sub = a - b;

        if (sum == c)
        {
            cout << "+" << endl;
        }
        if (sub == c)
        {
            cout << "-" << endl;
        }
    }

    return 0;
}