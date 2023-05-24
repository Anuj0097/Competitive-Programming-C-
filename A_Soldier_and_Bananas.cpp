#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int i, n, t, k, w;
    ll sum = 0;
    cin >> k >> n >> w;
    for (i = 1; i <= w; i++)
    {
        sum = sum + (i * k);
    }
    if (sum <= n)
        cout << 0 << endl;
    else
        cout << sum - n << endl;
    return 0;
}