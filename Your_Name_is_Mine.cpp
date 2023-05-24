#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string m, w;
        cin >> m >> w;
        string s, s1;
        if (m.size() >= w.size())
        {
            s = m;
            s1 = w;
        }
        else
        {
            s = w;
            s1 = m;
        }
        int i = 0, j = 0;
        while (i < s.size() && j < s1.size())
        {
            if (s[i] == s1[j])
            {
                i++;
                j++;
            }
            else
                i++;
        }
        if (j >= s1.size())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
