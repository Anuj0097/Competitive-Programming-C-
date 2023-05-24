#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int j, y;
        cin >> j >> y;

        if (j % 2 == 1)
            cout << "NO" << endl;
        else if (j % 2 == 0 && y % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (j > 1)
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