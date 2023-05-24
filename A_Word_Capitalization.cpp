#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[1001], c[1001];
    int i, n, len;
    cin >> s;
    len = strlen(s);
    for (i = 0; i <= len; i++)
    {
        if (i == 0)
        {
            if ((s[i] >= 'a') && (s[i] <= 'z'))
                s[i] = s[i] - 32;
            cout << s;
            return 0;
        }
    }
}