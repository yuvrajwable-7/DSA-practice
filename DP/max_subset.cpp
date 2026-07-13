#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int brr[n];
    cout << "Enter the array elements:" << endl;
    for (int i = 0;i<n;i++){
        cin >> brr[i];
    }
    int dp[n];
    int ref = 0;
    dp[0] = max(brr[0], ref);    //if all elements of array are negative we will select none
    dp[1] = max(brr[1], dp[0]);
    for (int i = 2; i < n;i++){
        dp[i] = max(dp[i - 1], brr[i] + dp[i - 2]);
    }
    cout << "The max sum sunset is:" << dp[n-1];
    return 0;
}