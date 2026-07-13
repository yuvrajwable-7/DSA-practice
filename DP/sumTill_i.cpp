#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the array size:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int dp[n];
    dp[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        dp[i] = dp[i - 1] + arr[i];
    }
    int query, q;
    cout << "Enter the number of query:" << endl;
    cin >> query;

    while (query--)
    {
        cout << "Enter the query:" << endl;
        cin >> q;
        cout << "The sum is:" << dp[q] << endl;
    }

    return 0;
}