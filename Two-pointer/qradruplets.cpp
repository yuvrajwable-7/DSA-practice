#include <iostream>
using namespace std;
int main()
{
    int f1;
    cout << "Enter the k1:" << endl;
    cin >> f1;
    int f2;
    cout << "Enter the k2:" << endl;
    cin >> f2;
    int countTotal = 0;
    int n;
    cout << "Enter the array size:" << endl;
    cin >> n;
    cout << "Enter the array elements:" << endl;
    int arr[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 2; j <= n - 2; j++)
    {
        int count1 = 0;
        int i = j - 1;
        while (i >= 1)
        {
            if (arr[i] + arr[j] > f1)
            {
                count1++;
            }
            i--;
        }
        int count2 = 0;
        int k = j + 1;
        int l = n;
        while (k < l)
        {
            if (arr[k] + arr[l] > f2)
            {
                count2 += abs(l - k);
                l--;
            }
            else
            {
                k++;
            }
        }
        countTotal += count1 * count2;
    }

    cout << "The count of valid subarrays are:" << countTotal;

    return 0;
}