#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, n, x, count;
    char str[10000];
    cin >> t;

    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
            {
                cnt++;
                i = i + 1;
            }
            else
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
