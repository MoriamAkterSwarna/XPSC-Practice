

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){
    int n; 
    cin >> n;
    int a = 1;     
    int cnt = 0; 
   
    while (a * 2 <= n)
    {
        a = a * 2;
        cnt++;
    }

    int result = 1;        
    bool flag = false; 

   
    for (int i = cnt - 1; i >= 0; i--)
    {
        if ((n & (1 << i)))
        {                
            flag = true; 
        }
        else
        {
            
            if (flag)
                result = result * 2; 
        }
    }

    cout <<  result << nl;
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