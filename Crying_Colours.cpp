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
        int ar[n][n];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> ar[i][j];
            }
        }
        int sum1 = ar[2][0] + ar[2][1] + ar[1][0];
        int sum2 = ar[0][1] + ar[0][2] + ar[1][2];
        if (ar[1][1] == n && ar[0][0] == n && ar[2][2] == n)
        {
            cout << "0" << endl;
        }
        else
            cout << max(sum1, sum2) << endl;
    }
    return 0;
}