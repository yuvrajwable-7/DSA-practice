#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cout << "Enter the value of k" << endl;
    cin >> k;
    string c;
    cout << "Enter the string:" << endl;
    cin >> c;
    int n = c.size();
    int dp[n] = {1};
    int max_l = 1;
    int max_i = 0;
    for (int i = 1; i < n;i++){
        if(abs(c[i]-c[i-1])<=k){
            dp[i] = dp[i - 1] + 1;
        }
        else{
            dp[i] = 1;
        }
        if(dp[i]>max_l){
            max_l=dp[i];
            max_i = i;
        }
    }

    int start_i = max_i - max_l + 1;
    cout << c.substr(start_i, max_l) << endl;
    

    return 0;
}