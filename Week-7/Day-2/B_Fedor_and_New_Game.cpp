#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){
    vector<int> v(1001);
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 0; i < m + 1; i++)
        cin >> v[i];

    int value = 0;

    for (int i = 0; i < m; i++)
    {
        int t = 0;
        for (int j = 0; j < n; j++)
            if (((v[i] >> j) & 1) != ((v[m] >> j) & 1))
                t++;
        if (t <= k)
            value++;
    }

    cout << value << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
        firebird_solve();
    

    return 0;
}