#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll cnt_positive = 0;
        ll cnt_negative = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                continue;
            }
            else if (a[i] >= 0)
            {
                cnt_positive++;
            }
            else
            {
                cnt_negative++;
            }
        }
        cout << cnt_positive * (cnt_positive - 1) / 2 + cnt_negative * (cnt_negative - 1) / 2 << endl;
    }
    return 0;
}