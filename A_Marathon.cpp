#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, n, i, sum = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d;
        if (a < b)
        {
            sum += 1;
        }
        if (a < c)
        {
            sum += 1;
        }
        if (a < d)
        {
            sum += 1;
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}