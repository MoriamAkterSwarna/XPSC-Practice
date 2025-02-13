class Solution
{
public:
    bool isPalindrome(string &s, int l, int r)
    {
        while (l <= r)
        {
            if (s[l++] != s[r--])
            {
                return false;
            }
        }
        return true;
    }

    void perm(int idx, vector<vector<string>> &result, vector<string> &v, string &s,
              int n)
    {
        if (idx == n)
        {
            result.push_back(v);
            return;
        }

        for (int i = idx; i < n; i++)
        {
            if (isPalindrome(s, idx, i))
            {
                v.push_back(s.substr(idx, i - idx + 1));
                perm(i + 1, result, v, s, n);
                v.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> result;
        vector<string> v;
        int n = s.size();
        perm(0, result, v, s, n);
        return result;
    }
};