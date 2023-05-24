#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        int res = 1;
        while (w % 2 == 0)
        {
            w /= 2;
            res *= 2;
        }
        while (h % 2 == 0)
        {
            h /= 2;
            res *= 2;
        }
        cout << (res >= n ? "YES\n" : "NO\n");
    }

    return 0;
}