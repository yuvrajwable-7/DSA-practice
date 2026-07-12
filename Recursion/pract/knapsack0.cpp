#include <iostream>
#include <iomanip>
using namespace std;

// ---------------- Recursive Version ----------------
int KnapSack(int val[], int wt[], int W, int n) {
    if (n == 0 || W == 0) {
        return 0;
    }

    if (W >= wt[n - 1]) { // Valid weight
        // include
        int ans1 = val[n - 1] + KnapSack(val, wt, W - wt[n - 1], n - 1);
        // exclude
        int ans2 = KnapSack(val, wt, W, n - 1);
        return max(ans1, ans2);
    } else {
        // exclude
        return KnapSack(val, wt, W, n - 1);
    }
}

// ---------------- DP (Tabulation) Version ----------------
int KnapSackDP(int val[], int wt[], int W, int n) {
    int dp[n + 1][W + 1]; // Create DP table

    // Initialize base cases
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
        }
    }

    // Fill DP table
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= W; w++) {
            if (wt[i - 1] <= w) {
                int include = val[i - 1] + dp[i - 1][w - wt[i - 1]];
                int exclude = dp[i - 1][w];
                dp[i][w] = max(include, exclude);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    // Display the DP table
    cout << "\nDP Table (Tabulation):\n";
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            cout << setw(4) << dp[i][w];
        }
        cout << endl;
    }

    return dp[n][W]; // Final answer
}

// ---------------- Main Function ----------------
int main() {
    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    int val[n], wt[n];
    cout << "Enter the values of the items:\n";
    for (int i = 0; i < n; i++) {
        cout << "Value of item " << i + 1 << ": ";
        cin >> val[i];
    }

    cout << "Enter the weights of the items:\n";
    for (int i = 0; i < n; i++) {
        cout << "Weight of item " << i + 1 << ": ";
        cin >> wt[i];
    }

    int W;
    cout << "Enter the knapsack capacity: ";
    cin >> W;

    // Recursive solution
    int ansRec = KnapSack(val, wt, W, n);
    cout << "\nMaximum Profit (Recursive) = " << ansRec << endl;

    // Dynamic Programming (Tabulation)
    int ansDP = KnapSackDP(val, wt, W, n);
    cout << "\nMaximum Profit (DP / Tabulation) = " << ansDP << endl;

    return 0;
}
