#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0, a[26] = {0};
        cin >> n;
        string s, k;
        cin >> s >> k;
        for (int i = 0; i <= n; i++)
        {
            if (s[i] != k[i])
            {
                char chn = k[i];
                int pch = chn - 'a';
                a[pch] = 1;
            }
        }
        for (int i = 0; i <= 26; i++)
        {
            if (a[i] == 1)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}