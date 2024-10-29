#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, t;
    cin >> a >> b >> t;

    float time = t + 0.5;
    

    int total_time = time / a; 
    int total_biscuits = total_time * b; 
    cout << total_biscuits << endl;

    return 0;
}