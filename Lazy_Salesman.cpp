#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define int long long
#define ll long long
#define ld long double
#define mod 1000000007
#define PI 3.141592653589793238462
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define allg(x) x.begin(), x.end(), greater<int>()
#define sz(x) (int)x.size()
using namespace std;
bool isPowerOfTwo(int n)
{
    if (n <= 0)
    {
        return false;
    }

    if (!(n & (n - 1)))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solve()
{
    int n, j, i;
    cin >> n >> j;
    vector<int> w(n);
    int sum = 0, x;

    for (i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    sort(w.rbegin(), w.rend());
    for (i = 1; i <= n; i++)
    {
        sum += w[i];
        if (sum >= j)
        {
            x = i;
            break;
        }
    }
    cout << (n - x) << endl;
}
int32_t main()
{

    int t;
    cin >> t;
    while (t--)

        solve();

    return 0;
}