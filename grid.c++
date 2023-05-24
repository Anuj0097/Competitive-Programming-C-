#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        int ans = (n + m - 2) * x;
        int q = min(n - 1, m - 1);
        int w = (n + m - 2) - 2 * q;
        int a = q * y + w * x;
        int b = q * y + 2 * (w / 2) * y + (w % 2) * x;
        ans = min(ans, min(a, b));
        cout << ans << "\n";
    }
}