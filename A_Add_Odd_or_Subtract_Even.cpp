#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, y, ans = 0;
        cin >> a >> b >> x >> y;
        if (a % 2 == 0)
        {
            ans = a + x;
        }
        else if (a % 2 != 0)
        {
            ans = a - y;
        }
        b = a - ans;
        cout << b << endl;
    }
    return 0;
}