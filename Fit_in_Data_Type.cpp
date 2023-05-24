#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f;
        cin >> n >> f;
        if (f <= n)
            cout << (f) << endl;
        else
        {
            f = f - n - 1;
            cout << (f) << endl;
        }
    }
    return 0;
}
