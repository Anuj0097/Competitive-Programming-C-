#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i])
                cnt++;
            else
                break;
        }
        if (cnt == n)
        {
            cout << 100;
        }
        else if (cnt >= m)
        {
            cout << k;
        }
        else
        {
            cout << 0;
        }
        cout << endl;
    }
    return 0;
}