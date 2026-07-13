#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size for arrays:" << endl;
    cin >> n;
    int c[n + 1] = {0};
    int d[n + 1] = {0};
    cout << "Enter the array elements for array 1:" << endl;

    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
    }
    cout << "Enter the array elements for array 2:" << endl;

    for (int i = 1; i <= n; i++)
    {
        cin >> d[i];
    }
    int dp[n + 1];
    dp[1] = max(c[1], d[1]);
    dp[2] = max(max(c[2], d[2]), dp[1]);

    for (int i = 3; i <= n;i++){
        int x = dp[i - 1];
        int y = c[i] + dp[i - 2];
        int z = d[i] + dp[i - 2];
        dp[i] = max(x, max(y, z));
        cout << i << " " << dp[i] << endl;
        
    }
    cout << "The sum of max subset of non-adjacent element:" << dp[n];

    return 0;
}