#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int result = 0;
    int cnt = 0;
    string s;
    int rem = 0;
    while (n != 0)
    {
        rem = n % 10;
        s.push_back(rem + '0');
        n = n / 10;
        cnt++;
    }

    result = 4 - cnt;
    while (result--)
    {
        s.push_back('0');
    }
    // cout << s << endl;
    reverse(s.begin(), s.end());  
    cout << s << endl;

    return 0;
}