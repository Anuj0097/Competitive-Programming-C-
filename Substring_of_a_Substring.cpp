#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size(), cnt = 0;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[0] != s[i] && s[i] != s[n - 1])
            {
                cnt++;
            }
            else
                cnt = 0;
            ans = max(ans, cnt);
        }
        if (ans == 0)
            cout << "-1" << endl;
        else
            cout << ans << endl;
    }
    return 0;
}
