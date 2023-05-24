#include <bits/stdc++.h>
using namespace std;
#define int long long

// #define sza(x) ((int)x.size())
// #de#define ld long doublefine all(a) (a).begin(), (a).end()
// const int MAX_N = 1e5 + 5;
const int mod = 1000000007;
// const ll INF = 1e9;
// const ld EPS = 1e-9;

int power(int d, int a, int MOD)
{
    int s = 1;
    while (a)
    {
        if (a % 2 == 1)
        {
            s = s * d % MOD;
        }
        d = d * d % MOD;
        a /= 2;
    }
    return s;
}
int apower(int f, int g)
{
    int x = power(2, g, mod - 1);
    if (g >= 30)
    {
        return power(f, x + mod - 1, mod);
    }
    return power(f, (1 << g), mod);
}

int ans(int n, int r, int w)
{
    int j = apower(n, w);
    int y = power(n, r - 1, mod);
    int z = power(n - 1, mod - 2, mod);
    int res = power(j, r, mod);
    return (res - y + mod) % mod * n % mod * z % mod;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int fans = 1;
    for (int i = 2; i * i <= n; i++)
    {
        int s = 0;
        while (n % i == 0)
        {
            s++;
            n /= i;
        }
        if (s != 0)
        {
            fans = fans * ans(i, s, k) % mod;
        }
    }
    if (n != 1)
    {
        fans = fans * ans(n, 1, k) % mod;
    }
    cout << fans << endl;
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