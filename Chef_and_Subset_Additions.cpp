#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        int flag = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if ((temp - a[i] != x) && (temp - a[i] != y))
                flag = 1;
        }
        if (flag)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}