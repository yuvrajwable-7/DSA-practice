#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int t;
    cout << "Enter the number of queries:" << endl;
    cin >> t;
    while (t--)
    {
        ll n;
        cout << "Enter the number of rows:" << endl;
        cin >> n;
        ll m;
        cout << "Enter the number of column:" << endl;
        cin >> m;
        vector<ll> b(m + 10,0);
        vector<ll> a(m + 10, 0);
        vector<ll> k(m + 10, 0);
        ll n1 = 0, n2 = 0;

        cout << "Enter the array elements:" << endl;
        for (ll i = 1; i <= m; i++)
        {
            cin >> b[i];
            if (b[i] == 1 || b[i] == 3)
            {
                a[i] = i;
                n1++;
            }
            if (b[i] == 2 || b[i] == 3)
            {
                k[i] = i;
                n2++;
            }
        }
        vector<ll> pre_a(m + 10,0);
        vector<ll> pre_k(m + 10,0);
        vector<ll> suff_a(m + 10,0);
        vector<ll> suff_k(m + 10,0);
        for (int i = 1; i <= m; i++)
        {
            pre_a[i] = pre_a[i - 1] + a[i];
            pre_k[i] = pre_k[i - 1] + k[i];
        }
        for (int i = m; i >= 1; i--)
        {
            suff_a[i] = suff_a[i + 1] + a[i];
            suff_k[i] = suff_k[i + 1] + k[i];
        }
        ll r1 = 0, r2 = 0;
        for (ll i = 1; i <= m; i++)
        {
            if (a[i] > 0)
            {
                r1++;
            }
            ll e1 = i * r1 - pre_a[i];
            ll e2 = suff_a[i] - i * n1;
            ll q1 = e1 + e2;
            if (a[i] > 0)
            {
                n1--;
            }



            if (k[i] > 0)
            {
                r2++;
            }
            ll E1 = i * r2 - pre_k[i];
            ll E2 = suff_k[i] - i * n2;
            ll q2 = E1 + E2;
            if (k[i] > 0)
            {
                n2--;
            }

            cout <<  (q1 - q2)<<" ";
        }
        
    }

    return 0;
}