#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll r, b, d;
        cin >> r >> b >> d;
        if (r > b)
            swap(r, b);
        puts(r + r * d >= b ? "YES" : "NO");
    }
    return 0;
}