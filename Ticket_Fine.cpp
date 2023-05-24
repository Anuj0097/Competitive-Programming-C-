#include <bits/stdc++.h>
using namespace std;
int minimumSteps(int x, int y)
{
    int cnt = 0;
    while (x != 0 && y != 0)
    {

        if (x > y)
        {

            cnt += x / y;
            x %= y;
        }

        else
        {

            cnt += y / x;
            y %= x;
        }
    }
    cnt--;
    if (x > 1 || y > 1)
        cnt = -1;
    cout << cnt;
}
int main()
{
    // Given X and Y
    int x, y;
    cin >> x >> y;
    minimumSteps(x, y);

    return 0;
}
