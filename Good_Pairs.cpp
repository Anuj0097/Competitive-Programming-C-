#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> ar(n);
        unordered_map<ll, ll> m;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            m[ar[i]]++;
        }
        ll ans = 0;
        for (auto i : m)
        {
            ans += (i.second * (i.second - 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}