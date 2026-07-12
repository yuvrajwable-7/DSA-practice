//Smallest element in the array
#include<bits/stdc++.h>
using namespace std;
int minEl(int arr[],int index,int n){
    if(index==n-1){
        return arr[index];
    }
    return min(arr[index],minEl(arr,index+1,n));
}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<minEl(arr, 0, 5);
    return 0;
}



//Largest element in the array
// #include<bits/stdc++.h>
// using namespace std;
// int minEl(int arr[],int index,int n){
//     if(index==n-1){
//         return arr[index];
//     }
//     return max(arr[index],minEl(arr,index+1,n));
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     cout<<minEl(arr, 0, 5);
//     return 0;
// }