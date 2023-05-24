#include <bits/stdc++.h>
using namespace std;
int GCD(int b, int c)
{
    if (c == 0)
        return b;
    return GCD(c, b % c);
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int b, c;
        cin >> b >> c;
        int gh = GCD(b, c);
        cout << c / gh << endl;
    }
    return 0;
}