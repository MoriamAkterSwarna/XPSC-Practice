// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define nl '\n'
// #define tst   \
//     int t;    \
//     cin >> t; \
//     while (t--)

// void firebird_solve()
// {
//     ll X;
//     cin >> X;

//     ll A, B;
//     if (X % 2 == 0)
//     {
//         A = 1;
//         B = X ;
//     }
//     else
//     {
//         A = 0;
//         B = X -1 ;
//     }

//     cout << A << " " << B << endl;

//     // ll  A = 0, B = X;

//     // for (ll  bit = 0; bit < 30; bit++)
//     // {

//     //     if (X & (1 << bit))
//     //     {

//     //         A = (1 << bit);
//     //         B = X ^ A;

//     //         if(A>B)
//     //         {
//     //             swap(A,B);
//     //         }

//     //         break;
//     //     }
//     // }
//     // if (A == B)
//     // {
//     //     if (X == 0)
//     //     {
//     //         A = B = 0;
//     //     }
//     //     else if (X == 1)
//     //     {
//     //         A = 0;
//     //         B = 1;
//     //     }
//     // }

//     // // if(A>B)
//     // // {
//     // //     swap(A,B);
//     // // }

//     // cout << A << " " << B << endl;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     tst
//     {
//         firebird_solve();
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void firebird_solve()
{
    ll X;
    cin >> X;


    ll pos = 0;
    for (ll i = 30; i >= 0; i--)
    {
        if (X & (1LL << i))
        {
            pos = i;
            break;
        }
    }


    ll A = (1LL << pos);
    ll B = X ^ A;

    
    if (A > B)
        swap(A, B);

 
    if (pos > 0)
    {
        ll A2 = (1LL << (pos - 1));
        ll B2 = X ^ A2;
        if (A2 <= B2 && B2 <= X && (B2 - A2) < (B - A))
        {
            A = A2;
            B = B2;
        }
    }

    cout << A << " " << B << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        firebird_solve();
    }
    return 0;
}