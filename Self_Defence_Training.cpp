#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        ll int ans = 0;
        for (ll int i = 0; i < n; i++)
            cin >> a[i];

        for (ll int i = 0; i < n; i++)
        {
            if (a[i] <= 60 && a[i] >= 10)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
