#include<bits/stdc++.h>
using namespace std;
int subSet(int arr[],int index,int sum,int n){
    //base condition
    if(index==n){
        return sum == 0;
    }
    return subSet(arr, index + 1, sum, n) + subSet(arr, index + 1, sum - arr[index], n);
}
int main(){
    int arr[] = {2, 5, 6, 1};
    int sum = 8;
    cout << subSet(arr, 0, sum, 4);
    return 0;
}