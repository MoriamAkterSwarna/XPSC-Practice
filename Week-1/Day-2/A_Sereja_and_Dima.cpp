// ? With Vector => Time Complexity O(n^2), space Complexity O(n)

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i <= n; i++)
//     {
//         cin >> v[i];
//     }

//     int seq = 1;

//     int sereSum = 0, dimaSum = 0;
//     int mxSum = 0;

//     while(!v.empty())
//     {
//         int left = v.front(), right = v.back();
//          cout << "left =>" << left << "right=> " << right << endl;
//         mxSum = max(left, right);
//         if (seq % 2 != 0)
//         {
//             sereSum = sereSum + mxSum;
//              cout << "sere ->" << sereSum << endl;
//         }
//         else
//         {
//             dimaSum = dimaSum + mxSum;
//              cout << "dima ->" << dimaSum << endl;
//         }

//         if (mxSum == left)
//         {
//             v.erase(v.begin());
//         }
//         else
//         {
//             v.pop_back();
//         }

//         seq++;
//     }
//     cout << sereSum << " " << dimaSum << endl;

//     return 0;
// }

// ? With Deque => Time Complexity O(n) , Space Complexity O(n)====================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    int seq = 1;

    int sereSum = 0, dimaSum = 0;
    int mxSum = 0;

    while (!dq.empty())
    {
        int left = dq.front(), right = dq.back();
        mxSum = max(left, right);
        if (seq % 2 != 0)
        {
            sereSum = sereSum + mxSum;
        }
        else
        {
            dimaSum = dimaSum + mxSum;
        }

        if (mxSum == left)
        {
            dq.pop_front();
        }
        else
        {
            dq.pop_back();
        }

        seq++;
    }
    cout << sereSum << " " << dimaSum << endl;

    return 0;
}