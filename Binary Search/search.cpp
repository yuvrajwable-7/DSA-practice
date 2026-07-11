
#include<iostream>
using namespace std;
bool find(int arr[],int k,int n){
    int start = 0;
    int end = n - 1;
    while(start<=end){
        int mid = (start + end) / 2;
        if(arr[mid]==k){
            return true;
        }
        else if(arr[mid]>k){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return false;
}
int main(){
    int arr[] = {
        2,
        4,
        4,
        6,
        7,
        9,
    };
    int k = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    if(find(arr,k,n)){
        cout << "Found the element";
    }
    else{
        cout << "No element exit";
    }


    return 0;
}