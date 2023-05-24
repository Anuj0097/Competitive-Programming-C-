#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long f = n & ~(n - 1);
        if (n & 1 || n == f)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << f / 2 << " " << n / 2 << " " << (n - f) / 2 << endl;
        }
    }
    return 0;
}