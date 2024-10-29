
// Link: https://codeforces.com/contest/499/problem/A 

//? solution Using map to store the pair of strings and then print the size of the map. 


// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long; 


// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
    

//     int n; 
//     cin >> n; 

//     map<pair<string, string>, bool> mp; 

//     for(int i = 0; i < n; i++){
//         string start, end; 
//         cin >> start >> end; 
//         mp[{start, end}] = true; 
//     } 

//     cout << mp.size() << "\n";

//     return 0;
// }


//? solution using set to store the pair of strings and then print the size of the set. 

#include <bits/stdc++.h>
using namespace std;
#define ll long long; 


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; 
    cin >> n; 

    set<pair<string, string>> st; 

    for(int i = 0; i < n; i++){
        string start, end; 
        cin >> start >> end; 
        st.insert({start, end}); 
    } 

    cout << st.size() << "\n";

    return 0;
}