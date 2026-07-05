//Transpose of a Matrix
#include<iostream>
using namespace std;
int main(){
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int r = sizeof(arr) / sizeof(arr[0]);
    int c = sizeof(arr[0]) / sizeof(arr[0][0]);
    for (int i = 0; i < r;i++){
        for (int j = 0; j < c;j++){
            arr[i][j] = arr[j][i];
        }
    }
        for (int i = 0; i < r;i++){
        for (int j = 0; j < c;j++){
            cout << arr[i][j] << " ";
        }
    }
        return 0;
}