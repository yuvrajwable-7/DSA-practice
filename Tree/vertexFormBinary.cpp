#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the numbers of nodes:" << endl;
    cin >> n;
    vector<int> G[n+1];
    cout << "Enter the edges:" << endl;
    int x, y;
    for (int i = 1; i <= n - 1;i++){
        cin >> x;
        cin >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    cout << endl;
    for (int i = 1; i <= n;i++){
        int degree = G[i].size();
        if(degree<=2){     //this conition is used if the root node has 3-child note as it does not satisfy the condtion for the binary tree so to find the leaf node(more valid) or node with 2-child or edges
            cout << "The node at position " << i << " can form a valid binary tree" << endl;
        }
    }
        return 0;
}