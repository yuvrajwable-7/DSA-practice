//left diagonal and right diagonal with repeating elements

#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int r = sizeof(arr) / sizeof(arr[0]);
    int c = sizeof(arr[0]) / sizeof(arr[0][0]);
    int left_diagonal=0;
    int right_diagonal=0;
    for (int i = 0; i < r;i++){
        for (int j = 0; j < c;j++){
            if(i==j){
                left_diagonal += arr[i][j];
            }
            if(i+j==r-1){                //For not repeating elements just and the condition && i!=j
                 right_diagonal += arr[i][j];
            }
        }
    }
    cout << left_diagonal;
    cout << endl;
    cout << right_diagonal;

    return 0;
}




