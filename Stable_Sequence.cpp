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
        int a[n];
        int max = INT_MIN;
        int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > max)
                max = a[i];
            if (a[i] < min)
                min = a[i];
        }
        int ans = 0;
        if (max == min)
            ans = 0;
        else if (a[n - 1] == max)
            ans = 1;
        else
            ans = 2;
        cout << ans << endl;
    }
    return 0;
}