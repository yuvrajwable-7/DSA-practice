#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the array size:" << endl;
    cin >> n;
    int arr[n + 1];
    cout << "Enter the array elements" << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int dp[n + 1];
    dp[1] = 0;
    dp[2] = abs(arr[2] - arr[1]);
    int k;
    cout << "Enter the numbers of jumps:" << endl;
    cin >> k;

    for (int j = 3; j <= n; j++)
    {
        int ans = INT32_MAX;
        for (int i = 1; i <= k && j - i >= 1; i++)
        {
            int opt = abs(arr[j] - arr[j - i]) + dp[j - i];
            ans = min(opt, ans);
        }
        dp[j] = ans;
    }
    cout << "The minimum cost to reach the last element: " << dp[n];

    return 0;
}