#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
const int maxN = (1LL << 15);

vector<int> allPalindromeNumber;
bool isPalindrome(int x)
{
    string s = to_string(x);
    int len = s.size();
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            return false;
        }
    }
    return true;
}

void markPalindrome()
{
    for (int i = 0; i < maxN; i++)
    {
        if (isPalindrome(i))
        {
            allPalindromeNumber.push_back(i);
        }
    }
}
void firebird_solve()
{
    int n;
    cin >> n;
    vector<int> a(n), cnt(maxN + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }

    long long ans = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < allPalindromeNumber.size(); j++)
        {
            int curr = (a[i] ^ allPalindromeNumber[j]);
            ans += cnt[curr];
        }
    }

    cout << (ans / 2) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    markPalindrome();

    tst
    {
        firebird_solve();
    }

    return 0;
}