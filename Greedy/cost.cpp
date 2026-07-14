#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout << "Enter the number of queries:" << endl;
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the number of rows:" << endl;   //n=1
        cin >> n;
        int m;
        cout << "Enter the number of column:" << endl;
        cin >> m;
        vector<int> b(m + 1);
        vector<int> a(m + 1, 0);
        vector<int> k(m + 1, 0);

        cout << "Enter the array elements:" << endl;
        for (int i = 1; i <= m; i++)
        {
            cin >> b[i];
            if (b[i] == 1)
            {
                a[i] = 1;
            }
            else if (b[i] == 2)
            {
                k[i] = 1;
            }
            else if (b[i] == 3)
            {
                a[i] = 1;
                k[i] = 1;
            }
        }
        vector<int> aarsi(m + 1, 0);
        vector<int> krypto(m + 1, 0);
        // calcute the cost for aarsi
        for (int l = 1; l <= m; l++)
        {
            int sum = 0;
            for (int i = 1; i <= m; i++)
            {
                if (a[i] == 1)
                {
                    sum += abs(l - i);
                }
            }
            aarsi[l] = sum;
        }
    

        // calcute the cost for krypto
        for (int l = 1; l <= m; l++)
        {
            int sum = 0;
            for (int i = 1; i <= m; i++)
            {
                if (k[i] == 1)
                {
                    sum += abs(l - i);
                }
            }
            krypto[l] = sum;
        }
        for (int j = 1; j <= m; j++)
        {
            cout << (abs(aarsi[j] - krypto[j])) << " ";
        }
    }

    return 0;
}