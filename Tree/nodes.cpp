#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the numbers of node:" << endl;
    cin >> n;
    int m;
    cout << "Enter the numbers of edges" << endl;
    cin >> m;
    int a, b;
    vector<int> G[n + 1];
    cout << "Enter the edges:" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    queue<int> q;
    int used[n + 1] = {0};
    int start = 1;
    q.push(1);
    used[1] = 1;
    int child[n + 1];
    int count = 0;
    cout << "Printing each node in the tree:" << endl;
    while (!q.empty())
    {
        int col = q.front();

        cout << col << " "; // here is the each node print
        q.pop();
        count = 0;
        for (auto j : G[col])
        {
            if (used[j] == 0)
            {
                used[j] = 1;
                q.push(j);
                count++;
            }
            else
            {
                // nothing to do
            }
        }
        child[col] = count;
    }
    cout << endl;
    cout << "count of children  of each node is:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << child[i] << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        if(used[i]==0){
            cout <<i<< " ";   //printing leaves
        }
    }

    return 0;
}