

#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>
using namespace std;

int calculateTypingTime(const string &s)
{
    int time = 2; // Time to type the first character
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            time += 1; 
        }
        else
        {
            time += 2; 
        }
    }
    return time;
}

int main()
{
    int t;
    cin >> t;
    vector<string> results;
    while (t--)
    {
        string s;
        cin >> s;

        unordered_set<char> existingChars(s.begin(), s.end());
        int maxTime = calculateTypingTime(s);
        string bestPassword = s;

        for (char c = 'a'; c <= 'z'; c++)
        {
            if (existingChars.find(c) != existingChars.end())
                continue;

            for (int i = 0; i <= s.size(); i++)
            {
                string temp = s;
                temp.insert(temp.begin() + i, c);
                int currentTime = calculateTypingTime(temp);

                if (currentTime > maxTime)
                {
                    maxTime = currentTime;
                    bestPassword = temp;
                }
            }
        }
        results.push_back(bestPassword);
    }

    for (const string &result : results)
    {
        cout << result << endl;
    }

    return 0;
}