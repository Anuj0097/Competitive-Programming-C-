#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, i, ci = 0;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i - 1] > a[i] && i >= 1)
            {
                swap(a[i - 1], a[i]);
                if (a[i - 2] > a[i - 1] && i >= 2)
                {
                    ci += 2;
                }
                else if (a[i - 2] < a[i - 1] && i >= 2)
                {
                    ci += 1;
                }
                else if (i == 1)
                {
                    ci += 1;
                }
                // else
                // {
                //     ci += 1;
                // }
            }
        }
        if (ci < 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}