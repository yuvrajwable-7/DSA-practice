// Sum of pairs using two array

#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int max = 0;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            int sum = arr1[i] + arr2[j];
            if(sum>max){
                max = sum;
            }
        }
    }
    cout <<"Max sum is:"<< max;
}