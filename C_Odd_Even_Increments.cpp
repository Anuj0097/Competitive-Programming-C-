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
        vector<int> a(n);
        int ev1 = 0, ev2 = 0, od1 = 0, od2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i % 2 == 0)
            {
                if (a[i] % 2 == 1)
                    od1 = 1;
                else
                    ev1 = 1;
            }
            else
            {
                if (a[i] % 2 == 1)
                    od2 = 1;
                else
                    ev2 = 1;
            }
        }
        if (ev1 && od1)
        {
            cout << "NO\n";
        }
        else if (ev2 && od2)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}