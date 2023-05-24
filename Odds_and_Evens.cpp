#include <bits/stdc++.h>
#include <chrono>
using namespace std;

#define ll long long int
#define ld long double
#define rep(i, j, n) for (int i = j; i < n; i++)
#define pre(i, j, n) for (int i = j; i >= n; i--)
#define all(x) x.begin(), x.end()
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define br "\n"

// #ifdef shuba
// #include "debug.h"
// #else
// #define debug(x) 42;
// #endif

void solve()
{
    int a, b;
    cin >> a >> b;
    if ((a + b) % 2 == 0)
    {

        cout << "Bob\n";
    }
    else
    {
        cout << "Alice\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(15);
    // #ifdef shuba
    //     freopen("input.txt", "r", stdin);
    //     // freopen("output.txt", "w", stdout);
    //     freopen("error.txt", "w", stderr);
    // ll tt = 0;
    // #endif

    ll t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        // cout << "Case #" << i + 1 << ": ";
        solve();
        // test();
    }
#ifdef shuba
    cerr << "TIME = " << float(clock() - tt) / CLOCKS_PER_SEC << endl;
    tt = clock();
#endif
}
