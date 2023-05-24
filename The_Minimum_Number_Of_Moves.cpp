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
        int min = INT_MAX;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            if (min > x)
            {
                min = x;
            }
        }
        cout << sum - (min * n) << endl;
    }
    return 0;
}