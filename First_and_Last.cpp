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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = a[0] + a[n - 1];
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, a[i] + a[i - 1]);
        }
        cout << ans << endl;
    }
    return 0;
}