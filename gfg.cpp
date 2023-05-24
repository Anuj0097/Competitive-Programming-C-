#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main()
{
    // Your code here
    int n, k, x;
    cin >> n >> k >> x;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];

        if (sum <= k * x)
        {
            cout << 0 << endl;
            return 0;
        }
        while (k--)
        {
            sort(arr, arr + n);
            arr[n - 1] = max(arr[n - 1] - x, 0);
        }
        sum = 0;
        for (int i = 0; i < n; i++)

            sum += arr[i];

        cout << sum << endl;
    }

    return 0;
}