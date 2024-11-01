#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    map<string, string> servers;
    for (int i = 0; i < n; i++)
    {
        string server, ip;
        cin >> server >> ip;
        servers[ip] = server;
    }
    map<string, string> commands;

    for (int i = 0; i < m; i++)
    {
        string command, ip;
        cin >> command >> ip;
        // string server = servers[ip.substr(0, ip.size() - 1)];
        // cout << command << " " << ip << " #" << servers[ip.substr(0, ip.size() - 1)] << endl;

        string modified_ip = ip.substr(0, ip.size() - 1);
        // cout << servers[modified_ip] << endl;
        string server = servers[modified_ip];
        cout << command << " " << ip << " #" << server << endl;
    }

    return 0;
}