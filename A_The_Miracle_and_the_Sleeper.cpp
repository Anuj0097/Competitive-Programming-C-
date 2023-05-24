
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pll pair<ll, ll>
#define ff first
#define ss second

const ll mod = 1e9 + 7;

int main()
{

    ll bg;
    cin >> bg;

    while (bg--)
    {

        ll l, r;
        cin >> l >> r;

        ll a = (r / 2ll), b = r;
        a++;

        if (a < l)
        {
            a = l;
        }
        if (a > r)
        {
            a = r;
        }

        ll ans = (b % a);
        cout << ans << endl;
    }

    return 0;
}