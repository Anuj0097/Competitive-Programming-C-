#include <bits/stdc++.h>
#define ll long long int
#define loop(x, val, n) for (int x = val; x < n; x++)
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, cnt = 0, ans = 0;
        cin >> n;
        string ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == "START38")
            {
                cnt++;
            }
            else
            {
                ans++;
            }
        }
        cout << cnt << " " << ans << endl;
    }
    return 0;
}
