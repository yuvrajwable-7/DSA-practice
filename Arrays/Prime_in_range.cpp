//Prime numbers in a range 
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prime = 0;
    for (int i = 0; i < n;i++){
        int count = 0;
        for (int j = 0; j <= i;j++){
            if(arr[i]%arr[j]==0){
                count++;
            }
            
        }
        if(count==2){
                prime++;
            }
    }
    cout << "no. of prime numbers are:" << prime;
    return 0;
}