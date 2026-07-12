//Sum of all array elements
#include<bits/stdc++.h>
using namespace std;
int sumArr(int arr[],int index,int n){
    if(index==n){
        return 0;
    }
    return arr[index] + sumArr(arr, index + 1, n);
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    cout << sumArr(arr, 0, 5);

    return 0;
}