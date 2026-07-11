#include <iostream>
using namespace std;

int main() {
    // n = number of ingredients
    int n = 2;

    // Recipe requirements for 1 cake (index 1-based)
    int rq[n + 1] = {0, 1, 2};  // Ingredient 1: 1 unit, Ingredient 2: 2 units

    // Current stock available
    int stock[n + 1] = {0, 0, 1}; // Have 0 of ingredient 1, 1 of ingredient 2

    // Cost per unit for each ingredient
    int cost[n + 1] = {0, 1, 1}; // Both cost 1 per unit

    int budget = 3; // Total money available
    int u = 0;      // Max cakes we can make
    int i = 1;      // Trying to make i cakes
    bool can = false;

    while (can == false) {
        int sum = 0; // Reset sum for this attempt

        // Calculate cost to make i cakes
        for (int j = 1; j <= n; j++) {
            int need = rq[j] * i;       // Total needed for this ingredient
            int buy = need - stock[j];  // How much we need to buy
            if (buy < 0) buy = 0;       // If stock is enough, no buying needed
            sum += buy * cost[j];       // Add cost
        }

        if (sum <= budget) {
            u = i; // We can make i cakes
        } else {
            can = true; // Can't make more cakes, stop
        }
        i++;
    }

    cout << "The maximum number of cakes that can be made is: " << u;

    return 0;
}
