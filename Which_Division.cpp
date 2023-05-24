#include <bits/stdc++.h>
using namespace std;
int main()
{
    int R;
    int t;
    cin >> t;
    while (t--)
    {

        cin >> R;
        if (R < 1600)

            cout << 3 << endl;

        else if (R >= 2000)
        {

            cout << 1 << endl;
        }

        else if (1600 <= R < 2000)
        {

            cout << 2 << endl;
        }
    }
    return 0;
}