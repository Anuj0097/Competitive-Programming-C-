#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, a, b;
        cin >> n >> x;
        if (n % 6 != 0)
            cout << ((n / 6) * x + x) << endl;
        else
            cout << ((n / 6) * x) << endl;
    }
    return 0;
}