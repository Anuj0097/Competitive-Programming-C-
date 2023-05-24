#include <bits/stdc++.h>
#define fast
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float a, b, x, y;
        cin >> a >> b >> x >> y;
        float q = a / x;
        float e = b / y;
        if (e > q)
            cout << "Chef" << endl;
        else if (q > e)
            cout << "Chefina" << endl;
        else
            cout << "Both" << endl;
    }
    return 0;
}