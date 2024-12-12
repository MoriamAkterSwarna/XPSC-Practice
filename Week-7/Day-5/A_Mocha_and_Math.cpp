#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){
    int n;
    cin >> n;
    vector<int> a(n);

    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    
    int result = a[0];
    for (int i = 1; i < n; i++)
    {
        result &= a[i];
    }

    cout << result << nl;
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