#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> art(n), arb(n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> art[i];
        }
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arb[i];
        }
        vector<ll> arie;
        for (auto &i : art)
            arie.push_back(i);
        for (auto &i : arb)
            arie.push_back(i);
        sort(arie.begin(), arie.end());
        ll ane = INT_MAX;
        for (int i = 0; i <= n; i++)
        {
            ane = min(ane, arie[n + i - 1] - arie[i]);
        }
        cout << ane << endl;
    }
    return 0;
}
