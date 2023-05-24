#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, j, k, l, r, c, x, y, n, m, p;
        cin >> n >> m >> r >> c;
        k = abs((r - 1) + (c - 1));
        l = abs((n - r) + (m - c));
        p = abs((r - 1) + (m - c));
        j = abs((n - r) + (c - 1));
        x = max(k, l);
        y = max(p, j);
        cout << max(x, y) << endl;
    }
    return 0;
}