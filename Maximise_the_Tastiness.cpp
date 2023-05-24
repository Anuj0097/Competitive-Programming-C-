#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ma = max(a, b);
        int ma1 = max(c, d);
        cout << ma + ma1 << endl;
    }
    return 0;
}