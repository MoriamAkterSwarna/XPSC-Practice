// ?https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> FirstNegativeInteger(vector<int> &arr, int k)
    {
        // write code here
        int n = arr.size();
        int l = 0, r = 0;
        vector<int> res;
        queue<int> q;

        while (r < n)
        {
            if (arr[r] < 0)
            {
                q.push(arr[r]);
            }
            if (r - l + 1 == k)
            {
                if (!q.empty())
                {
                    res.push_back(q.front());
                    if (arr[l] == q.front())
                    {
                        q.pop();
                    }
                }
                else
                {
                    res.push_back(0);
                }
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--)
    {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends