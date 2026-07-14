#include<iostream>
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int index(vector<int>&arr,int n,int target){
    int start = 1;
    int end = n;
    int ans=0;
    int d = 0;
    while(start<=end && d==0){
        int mid = (start + end) / 2;
        if(arr[mid]<=target){
            if(arr[mid+1]<=target){
                start = mid + 1;
            }
            else{
                ans = mid;  
                d = 1;
            }
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}
int main(){
    int n, q,total=0;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    vector<int> b;
    vector<ll> prefix;
    b.resize(n + 2);
    prefix.resize(n + 2, 0);
    cout << "Enter the array elements:" << endl;
    for (int i = 1; i <= n;i++){
        cin >> b[i];
        prefix[i] = prefix[i - 1] + b[i];
        total += b[i];
    }
    sort(b.begin() + 1, b.begin() + n + 1);
    b[0] = INT32_MIN;
    b[n + 1] = INT32_MAX;
    cout << "Enter the queries no.:" << endl;
    cin >> q;
    while(q--){
        int target;
        cout << "Enter the target value:" << endl;
        cin >> target;
        int g = index(b, n, target);
        cout << g << endl;
        ll left = target * g - prefix[g];
        ll right = (total - prefix[g]) - target * (n - g);
        ll u = left + right;
        cout << "The number of operation for the target " << target << " is:" << u << endl;
        
    }
    return 0;
}