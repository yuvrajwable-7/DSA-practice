//Sum of three numbers in array

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < n - 2;i++){
//         for (int j = i + 1; j <= n - 1;j++){
//             for(int k = j + 1; k < n;k++){
//                 cout << arr[i] << "+" << arr[j]<<"+"<<arr[k] <<"="<< arr[i] + arr[j]+arr[k] << endl;
//             }
//         }
//     }
//         return 0;
// }




//Even and odd count in triplet

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < n - 2;i++){
        for (int j = i + 1; j <= n - 1;j++){
             int sum = 0;
            for(int k = j + 1; k < n;k++){
                sum = arr[i] + arr[j] + arr[k];
                 cout << arr[i] << "+" << arr[j]<<"+"<<arr[k] <<"="<< arr[i] + arr[j]+arr[k] << endl;
                if(sum%2==0){
                    even_count++;
                    
                }
                else{
                    odd_count++;
                }
            }
        }
    }
    cout << "Even count is:" << even_count;
    cout << endl;
    cout << "odd count is:" << odd_count;
    return 0;
}

