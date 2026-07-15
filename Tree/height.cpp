#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll height[5000000 + 1];
void highest(ll node, vector<ll> G[], ll used[], ll parent[])
{
    used[node] = 1;
    for (auto u : G[node])
    {
        if (used[u] == 0)
        {
            parent[u] = node;
            highest(u, G, used, parent); // recursion function
        }
    }
    ll h = 0;
    for (auto u : G[node])
    {
        if (u == parent[node])
        {
            // ignore it
        }
        else
        {
            h = max(h, height[u]);   // consider if a node has two nodes connected to it so we will consider the node with longest depth of nodes till the leaf node so have to take the max of them 
        }
    }
    height[node] = h + 1;
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
    ll used[n + 1] = {0};
    ll parent[n + 1] = {0};
    highest(1, G, used, parent);
    cout << endl;
    cout << "The height of each node is:" << endl;
    for (ll i = 1; i <= n; i++)
    {
        cout << height[i] << endl;
    }
    return 0;
}