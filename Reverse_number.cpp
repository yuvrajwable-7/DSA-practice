// Reverse each  number in range ane sum it
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 21, 63, 47, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    int reverse_sum = 0;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int reverse = 0;
        while (num > 0)
        {

            int rem = num % 10;
            reverse = reverse * 10 + rem;
            num = num / 10;
        }
        reverse_sum += reverse;
    }
    cout << reverse_sum;

    return 0;
}