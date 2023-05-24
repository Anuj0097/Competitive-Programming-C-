#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, x, d = 0, b = 0;
        cin >> n >> x;
        if (x % 3 == 0)
        {
            d += (x / 3);
        }
        else if (x % 3 == 1)
        {
            d += (x / 3) + 1;
            b += 2;
        }
        else if (x % 3 == 2)
        {
            d += (x / 3) + 1;
            b++;
        }
        if (d + b <= n)
        {
            cout << "YES" << endl;
            cout << d << " " << b << " " << n - d - b << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}