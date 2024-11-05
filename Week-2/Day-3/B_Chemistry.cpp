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

        int n, k;
        cin >> n >> k;

       string s; 
       map<char, int> mp_s;
         for (int i = 0; i < n; i++)
         {
              char c;
              cin >> c;
              s.push_back(c);
              mp_s[c]++;
         }

         int odd_cnt = 0, even_cnt = 0; 

         for(auto [key, value] : mp_s)
         {
            if(value % 2 != 0)
            {
               odd_cnt++; 
            }
            else
            {
               even_cnt++;
            }
            
         }
         
         if( odd_cnt-1 > k)
         {
            cout << "NO" << endl;

         }
         else{
            cout << "YES" << endl;
         }
         
    }

    return 0;
}