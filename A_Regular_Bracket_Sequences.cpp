#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        for (int u = 1; u <= n; u++)
        {
            ll f = n;
            ll r = n;
            while (f > 0)
            {
                for (int i = 1; i <= u && f > 0; i++)
                {
                    cout << "(";
                    f--;
                }
                cout << ")";
                r--;
            }
            for (int j = 1; j <= r; j++)
            {
                cout << ")";
            }
            cout << "\n";
        }
    }
}