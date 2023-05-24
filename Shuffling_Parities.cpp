#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ev = 0, od = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 1)
            {
                od = od + 1;
            }
            else
            {
                ev = ev + 1;
            }
        }
        int ans = min(ev, (n + 1) / 2) + min(od, n / 2);
        cout << ans << endl;
    }
    return 0;
}