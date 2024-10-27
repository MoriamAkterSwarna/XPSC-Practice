#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;

    int result = 0;

    if (a > b)
    {
        result = 0;
    }
    else
    {
        result = b - a + 1 ;
    }
    cout << result << "\n";

    return 0;
}