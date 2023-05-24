#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x % y != 0)
        {
            cout << y / x << endl;
        }
        else
        {
            cout << y / x - 1 << endl;
        }
    }
    return 0;
}