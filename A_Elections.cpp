#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll f;
        cin >> f;
        ll w;
        cin >> w;
        ll s;
        cin >> s;
        cout << max(0LL, 1 + max(w, s) - f) << ' ' << max(0LL, 1 + max(f, s) - w) << ' ' << max(0LL, 1 + max(w, f) - s) << '\n';
    }
    return 0;
}