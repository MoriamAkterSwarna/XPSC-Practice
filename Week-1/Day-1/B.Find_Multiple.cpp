#include <bits/stdc++.h>
using namespace std; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int a, b, c; 
    cin >> a >> b >> c; 

    bool flag = false; 

    for(int i = a; i <=b; i++){
        if(i % c == 0){
            flag = true; 
            cout << i << "\n"; 
            break;
        }
    }

    if(!flag) {
        cout << -1 << "\n"; 
    }
    

    return 0;
}