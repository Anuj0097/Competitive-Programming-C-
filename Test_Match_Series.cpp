#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w = 0, g = 0;
        for (int i = 0; i < 5; i++)
        {
            int k;
            cin >> k;
            if (k == 1)
            {
                w++;
            }
            else if (k == 2)
            {
                g++;
            }
        }
        if (w > g)
        {
            cout << "INDIA" << endl;
        }
        else if (w < g)
        {
            cout << "ENGLAND" << endl;
        }
        else
        {
            cout << "DRAW" << endl;
        }
    }

    return 0;
}