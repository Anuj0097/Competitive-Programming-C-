#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int count = 1;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] > arr[i])
                {
                    if ((n - j) < j)
                    {
                        count++;
                    }
                    break;
                }
                else if (j == n - 1)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    // your code goes here
    return 0;
}
