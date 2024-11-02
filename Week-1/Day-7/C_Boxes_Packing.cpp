#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> boxes(n);
    map<int, int> freq; 

   
    for (int i = 0; i < n; i++)
    {
        cin >> boxes[i];

        // cout << boxes[i] << endl;
        freq[boxes[i]]++; 

        // cout << "i => " << " "  << freq[boxes[i]] << endl;


    } 

    int maxFreq = 0; 
    for (auto i : freq)
    {
        // cout << i.first << " " << i.second << endl;
        maxFreq = max(maxFreq, i.second); 
    }

    cout << maxFreq << endl;

   
    return 0;
}
