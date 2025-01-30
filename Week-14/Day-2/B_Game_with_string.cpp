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
    string s;
    cin >> s;

    stack<char> st;
    int moves = 0;

    for (char c : s)
    {
        if (!st.empty() && st.top() == c)
        {
            st.pop();
            moves++;
        }
        else
        {
            st.push(c);
        }
    }

    if(moves % 2 == 0){
        cout << "No" << nl; 
    }else{
        cout << "Yes" << nl; 
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