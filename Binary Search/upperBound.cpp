#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    vector<int> store(n);
    cout << "Enter the array element:" << endl;
    for (int i = 0; i < store.size();i++){
        cin >> store[i];
    }
    sort(store.begin(), store.end());
    int x;
    cout << "Enter x for the upper bound:" << endl;
    cin >>x;

    auto it = upper_bound(store.begin(), store.end(), x);
    int index = it - store.begin();
    cout << "The index of upper bound:" << index << endl;
    
    if(index<n){
        cout << "Value of upper bound element:" << store[index] << endl;
        
    }
    else{
        cout << "Element does not exit in the array";
    }

    return 0;
}