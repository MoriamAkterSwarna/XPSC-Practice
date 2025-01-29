#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans;
    int i = 0;

    while (i < n)
    {
        ans += s[i]; 
        i++;
        ans += s[i]; 
        i++;

        
        if (i < n && s[i] != 'a' && s[i] != 'e')
        {
            
            if (i + 1 >= n || (s[i + 1] != 'a' && s[i + 1] != 'e'))
            {
                ans += s[i];
                i++;
            }
        }

        
        if (i < n)
            ans += '.';
    }

    cout << ans << nl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tst{
        firebird_solve();
    }

    return 0;
}