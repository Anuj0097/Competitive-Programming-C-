#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, p, q;
        cin >> a >> b >> p >> q;
        if ((p % a == 0) && (q % b == 0))
        {
            ll x = p / a, y = q / b;
            if ((x - y) == 1 || (y - x) == 1 || (x - y) == 0 || (y - x) == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}