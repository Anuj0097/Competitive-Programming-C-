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
        sort(a, a + n, greater<>());
        bool ans = false;
        int sum = 0, i = 0;
        for (i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum >= x)
            {
                ans = true;
                break;
            }
        }
        if (ans)
            cout << i + 1 << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}