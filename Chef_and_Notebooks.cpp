#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define vi vector<int>

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll x, y, k, n;
        cin >> x >> y >> k >> n;

        bool flag = false;

        for (ll i = 0; i < n; i++)
        {
            ll p, c;
            cin >> p >> c;

            if ((p >= x - y) && (c <= k))
                flag = true;
        }

        if (flag)
            cout << "LuckyChef";

        else
            cout << "UnluckyChef";

        cout << endl;
    }

    return 0;
}