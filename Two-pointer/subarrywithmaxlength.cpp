#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 10;
    int maxLength = 0;
    int sum = 0;
    int i = 0;
    for (int j = 0; j < arr.size();j++){
        sum += arr[j];
        while(sum>k){
            sum = sum - arr[i];
            i++;
        }
        maxLength = max(maxLength, j - i + 1);
    }
    cout << maxLength;

    return 0;
}