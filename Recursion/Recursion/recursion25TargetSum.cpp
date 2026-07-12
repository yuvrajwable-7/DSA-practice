#include<bits/stdc++.h>
using namespace std;
bool sumTarget(vector<int>arr,int index,int n,int target){
    if(target==0){
        return 1;
    }
    if(index==n || target<0){
        return 0;
    }
    return sumTarget(arr, index + 1, n, target) || sumTarget(arr, index + 1, n, target - arr[index]);
}
int main(){
    int n;
    cout << "Enter the size of array:" <<endl;
    cin>>n;
    vector<int> arr(n);
    cout << "Enter array elements" << endl;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target" << endl;
    cin >> target;
    cout<<sumTarget(arr, 0, n, target);
    return 0;
}