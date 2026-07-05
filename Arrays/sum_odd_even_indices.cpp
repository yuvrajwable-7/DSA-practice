//sum of odd and even indices in an array


#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n;i++){
        if(i%2==0){
            sum1 += arr[i];
        }
        else{
            sum2 += arr[i];
        }
    }
    cout << "even sum:" << sum1;
    cout << endl;
    cout << "odd sum:" << sum2;
}