#include <bits/stdc++.h>
using namespace std;
#define int long long
// const int mod = 1000000007;
// const ll INF = 1e9;
// const ld EPS = 1e-9;

void solve()
{
    float a, b;
    int c;
    cin >> a >> b >> c;
    if ((a + b) / 2 > c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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