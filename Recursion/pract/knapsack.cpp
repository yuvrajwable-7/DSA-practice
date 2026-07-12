#include<bits/stdc++.h>
using namespace std;
struct Item {
    int value,weight;
};
bool cmp(Item val1,Item val2){
    double r1 = (double)val1.value / val1.weight;
    double r2 = (double)val2.value / val2.weight;
    return r1 > r2;
}
double knapSack(int n,int W,Item arr[]){
    sort(arr,arr+n,cmp);
    double finalVal = 0.0;
    int currWeight = 0;
    for (int i = 0; i< n;i++){
        if(arr[i].weight<=W){
            finalVal += arr[i].value;
            W -= arr[i].weight;
        }
        else{
            int remain = W;
            double newVal = arr[i].value * ((double)remain / arr[i].weight);
            finalVal += newVal;
            break;
        }
    }
    return finalVal;
}
int main(){
    int n=3;
    int W=50;
    Item arr[] = {{60, 10}, {100, 20}, {120, 30}};
    double ans = knapSack(n, W, arr);
    cout << "The maximum value is:" << ans;

    return 0;
}