#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll sum[5000000 + 1];
void highest(ll node, vector<ll> G[], ll used[], ll parent[],ll b[])
{
    used[node] = 1;
    for (auto u : G[node])
    {
        if (used[u] == 0)
        {
            parent[u] = node;
            highest(u, G, used, parent,b); // recursion function
        }
    }
    ll s = 0;
    for (auto u : G[node])
    {
        if (u == parent[node])
        {
            // ignore it
        }
        else
        {
            s = s + sum[u];
        }
    }
    sum[node] = s + b[node];
}
int main()
{
    ll n;
    cout << "Enter the numbers of node:" << endl;
    cin >> n;
    vector<ll> G[n + 1];
    cout << "Enter the edges:" << endl;
    int c, d;
    for (ll i = 1; i <= n - 1; i++)
    {
        cin >> c >> d;
        G[c].push_back(d);
        G[d].push_back(c);
    }
    cout << endl;
    ll b[n + 1];
    cout << "Enter the sum at each node: " << endl;
    for (ll i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    ll used[n + 1] = {0};
    ll parent[n + 1] = {0};
    highest(1, G, used, parent,b);
    cout << endl;
    cout << "The sum of subtree at each node is:" << endl;
    for (ll i = 1; i <= n; i++)
    {
        cout << sum[i] << endl;
    }
    return 0;
}