#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, bit[32];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int r, w = 0;
            cin >> r;
            while (r)
            {
                if (bit[w] == 0)
                    bit[w] = r % 2;
                r /= 2;
                w++;
            }
        }
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            ans += bit[i];
        }
        cout << ans << endl;
    }
    return 0;
}