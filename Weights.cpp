#include <bits/stdc++.h>
using namespace std;
#define int long long
// const int mod = 1000000007;
// const ll INF = 1e9;
// const ld EPS = 1e-9;

void solve()
{

    int w, a, b, c;
    cin >> w >> a >> b >> c;
    if ((w == a || w == b || w == c || w == a + b || w == b + c || a + c == w || w == a + b + c))
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