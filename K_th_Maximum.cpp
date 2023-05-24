#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll maxm = -1;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            maxm = max(maxm, a[i]);
        }
        ll ans = 0;
        for (int i = k - 1; i < n; i++)
        {
            if (a[i] == maxm)
            {
                ans += (n - i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}