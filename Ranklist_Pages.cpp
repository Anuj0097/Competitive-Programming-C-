#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T-- > 0)
    {
        int x;
        cin >> x;
        if (x <= 25)
        {
            cout << 1 << endl;
        }
        else
        {
            if (x % 25 == 0)
            {
                cout << x / 25 << endl;
            }
            else
            {
                cout << (x / 25) + 1 << endl;
            }
        }
    }
    return 0;
}