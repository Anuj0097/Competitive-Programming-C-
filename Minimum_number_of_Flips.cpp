#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (abs(sum) % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << abs(sum) / 2 << endl;
        }
    }
    return 0;
}