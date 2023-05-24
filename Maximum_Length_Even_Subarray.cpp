#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int long long n;
        cin >> t;
        if (n % 4 == 0 || (n + 1) % 4 == 0)
        {
            cout << n << endl;
        }
        else
        {
            cout << n - 1 << endl;
        }
    }
    return 0;
}