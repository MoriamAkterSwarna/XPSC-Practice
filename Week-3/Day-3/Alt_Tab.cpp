#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)

void firebird_solve()
{

    // int n;
    // cin >> n;
    // deque<string> a(n);

    // string s;

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> s;

    //     auto it = find(a.begin(), a.end(), s);   // complexity of find is O(n)
    //     if (it != a.end())
    //     {
    //         a.erase(it);
    //     }

    //     a.insert(a.begin(), s);
    // }

    // for(auto x : a)
    // {
    //     cout << x << " ";
    // }

    // string ans = "";

    // for (auto x : a)
    // {
    //     // cout << x << " ";
    //     int len = x.length();
    //     if (len >= 2)
    //     {
    //         ans += x.substr(len - 2, 2);
    //     }
    // }
    // cout << ans << nl;

    int n;
    cin >> n;

    stack<string> a; 
    for(int i = 0; i < n; i++)
    {
        string s; 
        cin >> s; 
        a.push(s);
    }
    set<string> st; 

    for(int i = 0; i < n; i++)
    {
       if(st.find(a.top()) == st.end())
       {
        //    cout << a.top() << " "; 
           st.insert(a.top()); 
           string ans = a.top(); 

           if(ans.length() >= 2)
           {
               cout << ans.substr(ans.length()-2, 2); 
           }
       }
       a.pop();
    }

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // tst
    // {
    firebird_solve();
    // }

    return 0;
}