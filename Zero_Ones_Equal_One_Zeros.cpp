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
        string str[n];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (n % 4 == 0)
            {
                if (i % 4 == 0 || (i + 1) % 4 == 0)
                    cout << "1";
                else
                    cout << "0";
            }
            else
            {
                if (i == 0 || i == n - 1)
                    cout << "0";
                else
                    cout << "1";
            }
        }
        cout << endl;
    }
    return 0;
}