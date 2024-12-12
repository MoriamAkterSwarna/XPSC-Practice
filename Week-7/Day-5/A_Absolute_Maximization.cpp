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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max_val = 0;    
    int min_val = 1023; 

   
    for (int bit = 0; bit < 10; bit++)
    {
        vector<int> ones, zeros;
       
        for (int i = 0; i < n; i++)
        {
            if (a[i] & (1 << bit))
            {
                ones.push_back(i);
            }
            else
            {
                zeros.push_back(i);
            }
        }

        if (!ones.empty())
        {
            
            max_val |= (1 << bit);
        }
        if (!zeros.empty())
        {
            
            min_val &= ~(1 << bit);
        }
    }

    cout << max_val - min_val << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tst
    {
        firebird_solve();
    }

    return 0;
}