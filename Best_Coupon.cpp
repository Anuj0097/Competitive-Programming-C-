#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x / 10 <= 100)
            cout << 100 << endl;

        else

            cout << x / 10 << endl;
    }
    return 0;
}