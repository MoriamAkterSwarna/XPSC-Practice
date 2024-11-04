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
        cin >> s;

        string final = "Timur";
        int len = final.length();

        sort(s.begin(), s.end());
        sort(final.begin(), final.end());

        if (n != len)
        {
            cout << "NO" << endl;
        }
        else if (s == final)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        // cout << s << " " << final << endl;
    }

    return 0;
}