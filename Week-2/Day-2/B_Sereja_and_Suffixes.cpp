#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> vc(n + 1), cnt(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> vc[i];
    }

    set<int> st;
    ;
    for (int i = n; i >= 1; i--)
    {
        st.insert(vc[i]);
        cnt[i] = st.size();
    }

    for (int i = 1; i <= m; i++)
    {
        int position;
        cin >> position;
        cout << cnt[position] << '\n';
    }

    return 0;
}