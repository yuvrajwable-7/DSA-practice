//sum of odd and even indices in an array


//Sum of pairs using  array
#include<iostream>
using namespace std;
int main(){
    int arr[] = { 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n-1;i++){
        for (int j = i + 1; j < n;j++){
            cout << arr[i] << "+" << arr[j] <<"="<< arr[i] + arr[j] << endl;
        }
    }
 
}