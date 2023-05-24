#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n], c = 0;
        ;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        for (i = 0; i < n - 1; ++i)
        {
            if (arr[i] == arr[i + 1])
            {
                c++;
            }
        }
        cout << n - c << endl;
    }
}