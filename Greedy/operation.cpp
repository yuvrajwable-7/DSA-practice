#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of :";
    cin >> n;
    cout << "enter the array:";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q;
    cout << "Enter the no. query:";
    cin >> q;
    int t;
    for (int i = 0; i < q; i++)
    {
        cout << "Enter the target:";
        cin >> t;
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            int op = abs(t - arr[j]);
            sum += op;
        }
        cout << "the total number of operation to perform: " << sum << endl;
    }

    return 0;
}