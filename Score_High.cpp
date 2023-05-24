#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, r, c, d;
        cin >> n >> a >> r >> c >> d;
        int ans = max(a, max(r, max(c, d)));
        cout << ans << endl;
    }
    return 0;
}