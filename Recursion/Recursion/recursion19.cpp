#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int start,int end,int x,int n){
    if(start>end){
        return 0;
    }
    int mid = start + (end - start) / 2;
    if(arr[mid]==x){
        return 1;
    }
    else if(arr[mid]<x){
        return binary(arr, mid + 1, end, x, n);
    }
    else{
        return binary(arr, start, mid-1, x, n);

    }
}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<binary(arr, 0, 4, 3, 5);
    return 0;
}