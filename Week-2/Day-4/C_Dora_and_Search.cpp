#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        ll n; 
        cin >> n; 
        vector<ll> v1 (n); 

        for(ll i = 0; i < n; i++){
            cin >> v1[i];
        } 

        ll l = 0, r = n-1; 

        ll mx_val = n, min_val = 1;

        while(l < r){
            if(v1[l] == min_val){
                l++;
                min_val++;
            }
            else if(v1[l] == mx_val){
                l++;
                mx_val--;
            }
            else if(v1[r] == min_val){
                r--;
                min_val++;
            }
            else if(v1[r] == mx_val){
                r--;
                mx_val--;
            }
            else{
                break;
            }
        }

        if(l != r){
            cout << l+1 << " " << r+1 << endl;
        }
        else{
            cout << -1 << endl;
        }

        



    }

    return 0;
}