// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define nl '\n'
// #define tst   \
//     int t;    \
//     cin >> t; \
//     while (t--)

// void firebird_solve()
// {

//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     if(n == 1){
//         cout << "YES" << nl;
//         return; 
//     }

//     if(n == 2){
//         if(v[0] == v[1]){
//             cout << "YES" << nl;
//         }else{
//             cout << "NO" << nl;
//         }
//         return;
//     }

//     int l = 0, r = l + 1;
//     bool flag = true;
//     while (r < n)
//     {

//         if (v[l] != v[r])
//         {
//             if (v[l] < v[r])
//             {
//                 v[l] = v[l] + v[r];
//             }
//             else
//             {
//                 v[r] = v[r] + v[l];
//             }
//             l++;
//             r++;
//         }
//         else
//         {
//             l++;
//             r++;
//         }
//     }

//     l = 0;
//     r = n - 1;
//     while (l < r)
//     {
//         if (v[l] != v[r])
//         {
//             flag = false;
//             break;
//         }
//         l++;
//         r--;
//     }

//     if (flag)
//     {
//         cout << "YES" << nl;
//     }
//     else
//     {
//         cout << "NO" << nl;
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     tst
//     {
//         firebird_solve();
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){

    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] != 0){
            mp[v[i]]++;

        }
    }

    // for(auto [x, y] : mp){
    //     cout << x << " " << y << nl;
    // }

    if(mp.size() == 1 || mp.size() == 0){
        cout << "YES" << nl;
        return;
    }
    else{
        cout << "NO" << nl;
        return;
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