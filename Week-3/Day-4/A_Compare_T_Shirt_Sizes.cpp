// ? https://codeforces.com/problemset/problem/1741/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)

void firebird_solve()
{

    int n;
    cin >> n;

    while (n--)
    {
        string s1, s2;

        cin >> s1 >> s2;

        if (s1 == s2)
        {
            cout << '=' << nl;
            continue; 
            
        }
        else{

        char l1 = s1.back();
        char l2 = s2.back();

        if (l1 == l2)
        {
            if (l1 == 'S')
            {
                if (s1.size() > s2.size())
                {
                    cout << '<' << nl;
                    continue;
                }
                else
                {
                    cout << '>' << nl;
                    continue;
                }
            }
            else{
                if (s1.size() > s2.size())
                {
                    cout << '>' << nl;
                    continue;
                }
                else
                {
                    cout << '<' << nl;
                    continue;
                }
            }
        }

        if (l1 == 'M')
        {
            if (l2 == 'S')
            {
                cout << '>' << nl;
                continue;
            }
            else
            {
                cout << '<' << nl;
                continue;
            }
        }
        if (l1 == 'S')
        {

            cout << '<' << nl;
            continue;
        }
        else
        {
            cout << '>' << nl;
            continue;
        }
    }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    firebird_solve();

    return 0;
}