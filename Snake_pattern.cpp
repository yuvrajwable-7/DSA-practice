// To print matrix in snake form
//First left to right then right to left and so on...
#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int r = sizeof(arr) / sizeof(arr[0]);
    int c = sizeof(arr[0]) / sizeof(arr[0][0]);
    for (int i = 0; i < r; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < c; j++)
            {

                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = c - 1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}