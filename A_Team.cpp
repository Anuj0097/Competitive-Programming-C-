#include <bits/stdc++.h>
using namespace std;
int main()
{
    int res = 0;
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                count++;
            }
        }
        if (count >= 2)
        {
            res++;
        }
    }
    cout << res << endl;
}