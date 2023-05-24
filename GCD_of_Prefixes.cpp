#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<int> f(n);
    for (int i = 0; i < n; i++)

        cin >> f[i];
    for (int i = 1; i < n; i++)
    {
        if (f[i] > f[i - 1] || (f[i - 1] % f[i] != 0))
        {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << f[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}