#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c = 1, ma = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            c++;
            ma = max(c, ma);
        }
        else if (s[i] != s[i - 1])
        {
            ma = max(ma, c);
            c = 1;
        }
    }
    cout << ma;

    return 0;
}