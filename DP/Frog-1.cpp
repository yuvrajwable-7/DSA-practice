#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the array size:" << endl;
    cin >> n;
    int arr[n+1];
    cout << "Enter the array elements" << endl;
    for (int i = 1; i <=n; i++)
    {
        cin >> arr[i];
    }

    int dp[n+1];
    dp[1] = 0;
    dp[2] = abs(arr[2] - arr[1]);
    for (int j = 3; j <= n;j++){
        dp[j] = min(abs(arr[j] - arr[j - 1]) + dp[j - 1], abs(arr[j] - arr[j - 2]) + dp[j - 2]);
    }
    cout << "The minimum cost to reach the last element: " << dp[n];

    return 0;
}