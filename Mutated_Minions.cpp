#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if ((temp + k) % 7 == 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
