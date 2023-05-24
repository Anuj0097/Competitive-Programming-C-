#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<ll, ll> d;
        for (int i = 0; i < n; i++)
        {
            ll l;
            cin >> l;
            d[l]++;
        }
        ll ans = 0;
        for (auto i : d)
        {
            ll sem = (i.first) + (i.second - 1);
            ans = max(ans, sem);
        }
        auto i = --d.end();
        ans = max(ans, i->first);
        cout << ans << endl;
    }
    return 0;
}