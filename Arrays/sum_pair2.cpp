// Sum of pairs using two array

#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    for (int i = 0; i < n1; i++)
    {
        for (int j = 1; j < n2; j++)
        {
            cout << arr1[i] << "+" << arr2[j] << "=" << arr1[i] + arr2[j] << endl;
        }
    }
}