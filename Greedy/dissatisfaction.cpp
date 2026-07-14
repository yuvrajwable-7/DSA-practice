#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << endl;
    int a, b;
    int sum = 0;
    vector<int> p;

    for (int i = 0; i < n;i++){
        cin >> a;
        cin >> b;
        sum += b * n - a;
        p.push_back(a - b);
    }
    sort(p.begin(), p.end());
    reverse(p.begin(), p.end());
    for (int j = 1; j <= n;j++){
        sum += p[j - 1] * j;
    }
    cout << endl;
    cout << "The minimum dissatisfaction is:" << sum;
    return 0;
}