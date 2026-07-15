#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the numbers of node:" << endl;
    cin >> n;
    int m;
    cout << "Enter the numbers of edges" << endl;
    cin >> m; //n-1
    int a, b;
    vector<int> G[n + 1];
    cout << "Enter the edges:" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    cout << "Enter the value of 0 and 1 for each nodes:" << endl;
    int c[n + 1];
    for (int j = 1; j <=n; j++)
    {
        cin >> c[j];
    }
    int final[n + 1] = {0};
    queue<int> q;
    int used[n + 1] = {0};
    int start = 1;
    q.push(1);
    used[1] = 1;
    int child[n + 1];
    final[1] = c[1];
    int count = 0;
 
    while (!q.empty())
    {
        int col = q.front();

        // cout << col << " "; // here is the each node print
        q.pop();
        count = 0;
        for (auto j : G[col])
        {
            if (used[j] == 0)
            {
                used[j] = 1;
                q.push(j);
                count++;
                if (c[j] == 1)
                {
                    final[j] = final[col] + 1;
                }
                else
                {
                    final[j] = final[col];
                }
            }
            else
            {
                // nothing to do
            }
        }
        child[col] = count;
    }
    cout << "The number of 1 on shortest path from 1 to each node is:" << endl;
    for (int i = 1; i <= n;i++){
        cout << final[i] << " ";
    }

        return 0;
}