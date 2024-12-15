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

    int n, cnt = 0;
    string s;
    cin >> n >> s;
    deque<char> st;
    for (auto i : s)
    {
        if (!st.empty() && st.back() != i)
        {
            st.pop_back();
            cnt++;
        }
        else
            st.push_back(i);
    }
    if (cnt % 2 == 0)
        cout << "Ramos" << nl;
    else
        cout << "Zlatan" << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tst
    {
        firebird_solve();
    }

    return 0;
}