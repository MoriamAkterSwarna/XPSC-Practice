#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){
    string input;
    cin >> input;

    
    unordered_map<char, int> freq;
    for (char c : input)
    {
        freq[c]++;
    }

    
    int oddCount = 0;
    char oddChar = '\0';
    for (auto &entry : freq)
    {
        if (entry.second % 2 != 0)
        {
            oddCount++;
            oddChar = entry.first;
        }
    }

    
    if (oddCount > 1)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }

    
    string half = "";
    for (auto &entry : freq)
    {
        half += string(entry.second / 2, entry.first);
    }

    string palindrome = half;
    if (oddCount == 1)
    {
        palindrome += oddChar; 
    }
    reverse(half.begin(), half.end());
    palindrome += half; 

    cout << palindrome << endl;
    return;

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
        firebird_solve();

    return 0;
}