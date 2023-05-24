#include <bits/stdc++.h>
using namespace std;
int t, n;
void solve()
{
    cin >> n;
    for (int b = 2;; b++)
    {
        int a = n - b - 1, c = 1;
        if (a + b + c == n && __gcd(a, b) == c)
        {
            cout << (a, b, c) << endl;
            return;
        }
    }
}
int main()
{
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
