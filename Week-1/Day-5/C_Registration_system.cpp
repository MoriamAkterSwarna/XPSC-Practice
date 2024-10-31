#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> mp;

    while (n--)
    {
        string name;
        cin >> name;
        
        if (mp[name] == 0)
        {
            
            mp[name] = 1; 
            cout << "OK" << endl;
        }
        else
        {
           
            int count = mp[name];
            string new_name;
            new_name = name + to_string(count);
            count++;
          
            mp[new_name] = 1;
            mp[name] = count; 
            cout << new_name << endl; 
        }
    }

    return 0;
}