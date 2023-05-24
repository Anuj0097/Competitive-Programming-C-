#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, k[n], count = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> k[i];
            if (k[i] -= 0)
            {
                count++;
                cout << count << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}