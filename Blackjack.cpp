#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = 21 - a - b;
        if (ans > 10)
            cout << "-1" << endl;
        else
            cout << ans << endl;
    }
    return 0;
}