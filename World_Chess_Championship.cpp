#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        int cntC = 0;
        int cntN = 0;
        int cntD = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'C')
            {
                cntC++;
            }
            else if (s[i] == 'N')
            {
                cntN++;
            }
            else
            {
                cntD++;
            }
        }
        int f = (2 * cntC + cntD * 1);
        int g = (2 * cntN + cntD * 1);
        if (g == f)
            cout << (55 * x) << endl;
        else if (g > f)
            cout << (40 * x) << endl;
        else
            cout << (60 * x) << endl;
    }
    return 0;
}