#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d, h;
        cin >> n >> d >> h;
        int a[n];
        int rain = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > 0)
                rain += a[i];
            else
            {
                if (rain < d)
                    rain = 0;
                else
                    rain -= d;
            }
            if (rain > h)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}