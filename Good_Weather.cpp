#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[7], s = 0, r = 0;
        for (int i = 0; i < 7; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                r++;
            }
            else
            {
                s++;
            }
        }
        if (s > r)
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