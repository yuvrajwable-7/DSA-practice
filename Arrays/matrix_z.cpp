//Printing matrix in Z-form
//Z-form=first row+right diagonal+last row


#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int r = sizeof(arr) / sizeof(arr[0]);
    int c = sizeof(arr[0]) / sizeof(arr[0][0]);

    for (int i = 0; i < r;i++){
        for (int j = 0; j < c;j++){
            if(i==0 || i==r-1 ||i+j==r-1){
                cout << arr[i][j] << " ";
            }
          
        }
    }
   
    return 0;
}