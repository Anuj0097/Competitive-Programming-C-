#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, y, n;
        cin >> r >> y >> n;
        if (r == y)
        {
            cout << "0" << endl;
        }
        else
        {
            int g = r ^ y;
            if (g < n)
            {
                cout << "1" << endl;
            }
            else
            {
                if (log(g) == log(n))
                {
                    if (n & (n - 1))
                    {
                        cout << "2" << endl;
                    }
                    else
                    {
                        cout << "-1" << endl;
                    }
                }
                else
                {
                    cout << "-1" << endl;
                }
            }
        }
    }
    return 0;
}