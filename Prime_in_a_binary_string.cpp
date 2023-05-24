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
        int n = s.length();
        if (n == 1)
        {
            cout << "No" << endl;
            continue;
        }
        int count = 0, posti = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count++;
                posti = i + 1;
            }
        }
        if (count == 0 || (count == 1 && posti == n))
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}