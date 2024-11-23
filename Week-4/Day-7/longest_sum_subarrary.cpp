//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int lenOfLongestSubarr(vector<int> &arr, int k)
    {
        // code here
        int n = arr.size();
        int result = 0;

        map<long long, int> pref;
        long long curr = 0;

        for (int i = 0; i < n; i++)
        {
            curr += arr[i];

            if (curr == k)
            {
                result = max(result, i + 1);
            }

            if (pref.find(curr - k) != pref.end())
            {
                result = max(result, i - pref[curr - k]);
            }

            if (pref.find(curr) == pref.end())
            {
                pref[curr] = i;
            }
        }

        return result;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--)
    {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value)
        {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends