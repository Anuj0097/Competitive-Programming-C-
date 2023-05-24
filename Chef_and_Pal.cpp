
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- != 0)
    {
        int n, flag = 0, x = 0;
        cin >> n;
        if (n % 2 != 0)
        {
            cout << "-1\n";
        }
        else if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                cout << "10";
            }
            cout << "\n";
        }
    }
    return 0;
}