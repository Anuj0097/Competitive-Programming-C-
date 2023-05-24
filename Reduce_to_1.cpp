#include <bits/stdc++.h>
using namespace std;
void solve();

int32_t main()
{

    int tc;
    tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
        cout << 0 << endl;
    else if (n % 2 == 1)
        cout << 1 << endl;
    else
    {
        int k = sqrt(n);
        if (k * k == n)
        {
            cout << 1;
            return;
        }
        int two = 0;
        while (n % 2 == 0)
            two++, n >>= 1;
        if (!(n & (n - 1)))
            cout << (two % 2 == 1 ? -1 : 1);
        else if (two % 2 == 1)
            cout << -1 << endl;
        else
            cout << 2 << endl;
    }
}