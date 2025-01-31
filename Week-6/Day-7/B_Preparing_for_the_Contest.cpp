#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){
    int n, k;
    cin >> n >> k;

    vector<int> result;

    
    for (int i = 1; i <= k + 1; ++i)
    {
        result.push_back(i);
    }

    
    for (int i = n; i > k + 1; --i)
    {
        result.push_back(i);
    }

   
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

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