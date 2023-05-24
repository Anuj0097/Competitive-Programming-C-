#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll g, c;
    cin >> g >> c;
    ll h = ((c * c) / (2 * g));
    cout << h << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }

    return 0;
}