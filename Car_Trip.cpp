#include <bits/stdc++.h>
using namespace std;
#define int long long
// const int mod = 1000000007;
// const ll INF = 1e9;
// const ld EPS = 1e-9;

void solve()
{
    int x;
    cin >> x;
    if (x < 300)
        cout << 300 * 10 << endl;
    else
        cout << x * 10 << endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}