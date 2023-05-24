#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll d, r;
        cin >> d >> r;
        if (d == 1 || r == 1)
        {
            cout << -1 << endl;
        }
        else if (__gcd(d, r) == 1)
        {
            cout << 1 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}