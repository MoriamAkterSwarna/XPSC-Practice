#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){

    
    string str;
    ll left, point;
    while (cin >> str)
    {
        left = str.size();
         ll sum = 0, value = 1;
        for (ll i = left - 1; i >= 0; i--)
        {
            if (str[i] == '7')
                point = pow(2, value);
            else
                point = pow(2, value) - pow(2, value - 1);

            value++;
            sum += point;
        }
        cout << sum << endl;
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