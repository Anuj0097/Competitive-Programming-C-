#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n > 1 && k == 1)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 1; i < k; i++)
    {
        cout << i << ' ';
    }
    for (int i = n; i >= k; i--)
    {
        cout << i << ' ';
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
