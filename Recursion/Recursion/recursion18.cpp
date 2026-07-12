//Linear search
#include<bits/stdc++.h>
using namespace std;
int linear(int arr[],int index,int x,int n){
    if(index==n){
        return 0;
    }
    if(arr[index]==x){
        return 1;
    }
    return linear(arr, index + 1, x, n);
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    cout << linear(arr, 0, 4,5);

    return 0;
}
