#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int g = 0, l = 0, c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
            {
                g++;
            }
            else if (s[i] == 'B')
            {
                l++;
            }
            else
            {
                c++;
            }
        }
        if (l == (g + c))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}