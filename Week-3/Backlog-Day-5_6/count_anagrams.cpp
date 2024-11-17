//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(string pat, string txt)
    {
        int n = txt.length();
        int m = pat.length();

        if (n < m)
        {
            return 0;
        }

        vector<int> cnt_pat(26, 0);
        vector<int> cnt_txt(26, 0);

        for (int i = 0; i < m; i++)
        {
            cnt_txt[txt[i] - 'a']++;
        }

        for (int c : pat)
        {
            cnt_pat[c - 'a']++;
        }

        int cnt = 0;

        if (cnt_pat == cnt_txt)
        {
            cnt++;
        }

        for (int i = m; i < n; i++)
        {
            cnt_txt[txt[i] - 'a']++;

            cnt_txt[txt[i - m] - 'a']--;

            if (cnt_txt == cnt_pat)
            {
                cnt++;
            }
        }

        return cnt;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";

        cout << "~" << "\n";
    }
    return 0;
}
// } Driver Code Ends