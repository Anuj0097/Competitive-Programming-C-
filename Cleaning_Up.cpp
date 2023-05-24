#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int no = 0;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }

        int count;

        for (int i = 1; i <= m; i++)
        {
            cin >> no;
            a[no - 1] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            count = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] == 0)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            b[i] = count;
        }

        int k = 0;

        while (k < n)
        {
            if (a[k] == 0)
            {
                k++;
            }
            else
            {
                cout << a[k] << " ";
                a[k] = 0;
                k = k + 2 + b[k];
            }
        }
        cout << endl;

        for (int l = 0; l < n; l++)
        {
            if (a[l] != 0)
                cout << a[l] << " ";
        }
        cout << endl;
    }
    return 0;
}
