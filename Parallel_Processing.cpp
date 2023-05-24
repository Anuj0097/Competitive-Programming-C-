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
        int ans = 0, sum = 0, pref = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        ans = sum;
        for (int i = 0; i < n; i++)
        {
            pref += a[i];
            int rem = sum - pref;
            int req_time = max(rem, pref);
            ans = min(ans, req_time);
        }
        cout << ans << endl;
    }
    return 0;
}