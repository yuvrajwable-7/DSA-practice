#include<iostream>
using namespace std;
bool can(long long mid, int stock[], int rq[], int cost[], int n,long long budget)
{
    int total=0;
    for (int j = 1; j <= n;j++){            //mid shows no. of cake
        long long need = (long long)rq[j] * mid;
        long long buy = max(0LL, need - (long long)stock[j]);
        total += buy * cost[j];
        if(total>budget){
            return false;
        }
    }
    return true;
}
int main(){
     // n = number of ingredients
    int n = 2;

    // Recipe requirements for 1 cake (index 1-based)
    int rq[n + 1] = {0, 1, 2};  // Ingredient 1: 1 unit, Ingredient 2: 2 units

    // Current stock available
    int stock[n + 1] = {0, 0, 1}; // Have 0 of ingredient 1, 1 of ingredient 2

    // Cost per unit for each ingredient
    int cost[n + 1] = {0, 1, 1}; // Both cost 1 per unit

    long long budget = 3; // Total money available
    int u = 0;
    long long start = 0;;
    long long end = 1e9; // in OA question it is 10^9;
    while(start<=end){
        long long mid = start + end / 2;
        if(can(mid,stock,rq,cost,n,budget)){
            u = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout << "The max number that can be made is:" << u;

    return 0;
}