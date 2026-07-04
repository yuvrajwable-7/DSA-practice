//First and last index of targeted element
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7, 8, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    int first_ind = -1;
    int last_ind = -1;
    for (int i = 0; i < n;i++){
        if(arr[i]==target){
            first_ind = i;
            break;
        }

    }
    for (int j = n - 1; j >= 0;j--){
        if(arr[j]==target){
            last_ind = j;
            break;
        }
    }
    cout << "First index of target element:" << first_ind;
    cout << endl;
    cout << "Last index of target element:" << last_ind;

    return 0;
}


