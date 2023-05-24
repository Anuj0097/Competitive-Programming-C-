#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        set<ll> x;
        set<ll> y;
        while (n--)
        {
            ll g, l;
            cin >> g >> l;
            x.insert(g);
            y.insert(l);
        }
        cout << x.size() + y.size() << endl;
    }
    return 0;
}