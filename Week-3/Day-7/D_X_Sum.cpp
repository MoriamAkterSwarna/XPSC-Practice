#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){

    int n, m; 
    cin >> n >> m; 

    deque<deque<int>> a(n, deque<int>(m)); 
     

     for(int i = 0; i < n; i++){
         for(int j = 0; j < m; j++){
             cin >> a[i][j]; 
         }
     }

     int result = 0, sum; 
     int v1, v2; 

     for(int i = 0; i < n; i++){
         for(int j = 0; j < m; j++){
            sum = a[i][j] ;
             v1 = j-1; 
             v2 = j+1; 
             
                for(int x = i+1; x < n; x++){
                    if(v1 >= 0){
                        sum += a[x][v1]; 
                        v1--; 
                    }
                    if(v2 < m){
                        sum += a[x][v2]; 
                        v2++; 
                    }
                }

                v1 = j - 1;
                v2 = j + 1;
                for (int x = i - 1; x >= 0; x--)
                {
                    if (v1 >= 0)
                    {
                        sum += a[x][v1];
                        v1--;
                    }
                    if (v2 < m)
                    {
                        sum += a[x][v2];
                        v2++;
                    }
                }

                if(sum > result){
                    result = sum; 
                }
         }
         
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