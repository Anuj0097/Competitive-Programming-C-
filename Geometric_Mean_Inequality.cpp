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
        int a[n];
        int x, y;
        cin >> x >> y;
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
            cout << "Yes" << endl;
        }
        else if (abs(x - y) == 2)
        {
            if (x % 2)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}