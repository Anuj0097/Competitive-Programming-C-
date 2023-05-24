#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int tt = n - x + x - 1 + n - y + y - 1;
        int ul = min(x - 1, y - 1);
        int ru = min(x - 1, n - y);
        int s1 = min(n - x, y - 1);
        int s2 = min(n - x, n - y);
        int tot = tt + ul + ru + s1 + s2;
        cout << tot << endl;
    }

    return 0;
}
