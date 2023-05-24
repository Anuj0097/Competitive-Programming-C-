#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x, y;
        cin >> x >> y;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == -1)
                x++;
            else
                y++;
        }
        if (abs(x - y) < 2)
        {
            cout << "YES" << endl;
        }
        else if (abs(x - y) == 2)
        {
            if (x % 2)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}