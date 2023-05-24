#include <bits/stdc++.h>
#define ll long long int
#define loop(x, val, n) for (int x = val; x < n; x++)
using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        cout << max(((500 - (2 * x)) + (1000 - (4 * (x + y)))), ((1000 - (4 * y)) + (500 - (2 * (x + y)))));
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
