#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int maxV = x;
        for (int i = 0; i < n; i++)
        {
            x += a[i];
            if (x > maxV)
                maxV = x;
        }
        cout << maxV << "\n";
    }
    return 0;
}