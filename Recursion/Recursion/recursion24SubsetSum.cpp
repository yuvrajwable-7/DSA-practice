
#include<bits/stdc++.h>
using namespace std;
void subsetSum(vector<int>arr,int index,int n,int sum,vector<int>&temp){
    if(index==n){
        temp.push_back(sum);
        return;
    }
    //not include
    subsetSum(arr, index + 1, n, sum,temp);
    //include
    subsetSum(arr, index + 1, n, sum+arr[index],temp);

}
int main(){
    int n;
    cout << "Enter size:" << endl;
    cin >> n;
    vector<int> arr(n);
    vector<int> temp;
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int sum = 0;
    subsetSum(arr, 0, n, sum,temp);
    for (int i = 0; i < temp.size();i++){
        cout << temp[i]<<endl;
    }

        return 0;
}