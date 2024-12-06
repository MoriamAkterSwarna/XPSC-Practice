// *   https: // codeforces.com/problemset/problem/1985/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)

void firebird_solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // ll good_prefixes = 0;

    // for (ll len = 1; len <= n; len++)
    // {
    //     ll prefix_sum = 0;
    //     bool is_good = false;

    //     for (ll i = 0; i < len; i++)
    //     {
    //         prefix_sum += a[i];
    //     }

    //     for (ll i = 0; i < len; i++)
    //     {
    //         ll sum_without = prefix_sum - a[i];
    //         if (sum_without == a[i])
    //         {
    //             is_good = true;
    //             break;
    //         }
    //     }

    //     if (len == 1 && a[0] == 0)
    //     {
    //         is_good = true;
    //     }

    //     if (is_good)
    //     {
    //         good_prefixes++;
    //     }
    // }

    // ll running_sum = 0;

    // for (ll i = 0; i < n; i++)
    // {
    //     running_sum += a[i];
    //     bool is_good = false;

    //     if (i == 0)
    //     {

    //         if (a[0] == 0)
    //             is_good = true;
    //     }
    //     else
    //     {

    //         for (ll j = 0; j <= i; j++)
    //         {
    //             if (2 * a[j] == running_sum)
    //             {
    //                 is_good = true;
    //                 break;
    //             }
    //         }
    //     }

    //     if (is_good)
    //         good_prefixes++;
    // }

    // Total complexity O(n^2)

    // ll good_prefixes = 0;
    // ll running_sum = 0;
    // unordered_set<ll> prefix_elements;

    // for (ll i = 0; i < n; i++) // total O(n)
    // {
    //     running_sum += a[i];
    //     prefix_elements.insert(a[i]);   // O(1)

    //     if (i == 0)
    //     {
    //         if (a[0] == 0)
    //             good_prefixes++;
    //         continue;
    //     }

    //     if (running_sum % 2 == 0)
    //     {
    //         ll half_sum = running_sum / 2;

    //         if (prefix_elements.count(half_sum))
    //         {
    //             good_prefixes++;
    //         }
    //     }
    // }

    // cout << good_prefixes << nl;

// Total complexity O(n)
    int good_prefixes = 0;
    ll running_sum = 0;
    map<ll, int> freq;

    for (int i = 0; i < n; i++)
    {
        running_sum += a[i];

    
        if (i == 0)
        {
            if (a[0] == 0)
                good_prefixes++;
            freq[a[i]]++;
            continue;
        }

       
        if (running_sum % 2 == 0)
        {
            ll half_sum = running_sum / 2;

            
            if (a[i] == half_sum)
            {
                good_prefixes++;
            }
            
            else if (freq.count(half_sum))
            {
                good_prefixes++;
            }
        }

        freq[a[i]]++;
    }

    cout << good_prefixes << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tst
    {
        firebird_solve();
    }

    return 0;
}