#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){
    int n;
    cin >> n;

    int sp = (n + 1) / 2;
    cout << sp << nl;

    int left = 1;
    int right = 3 * n;

    while (sp--)
    {
        cout << left + 1 << " " << right << nl;
        left += 3;
        right -= 3;
    }
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