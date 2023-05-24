#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define f(i, a, n) for (ll i = a; i < n; i++)
#define fb(i, a, n) for (ll i = n - 1; i >= a; i--)

#define pr pair<ll, ll>
#define vr vector<ll>
#define vp vector<pair<ll, ll>>

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mem(x, y) memset(x, y, sizeof(x))

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        x = max(x - a, 0);
        y = max(y - b, 0);
        if (c >= x + y)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}