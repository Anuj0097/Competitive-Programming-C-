#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x = 0, y = 0;
        cin >> x >> y;
        int flr = 0;
        if (x > y)
        {
            flr = ceil((x - y) / static_cast<double>(10));
                }

        else
        {
            flr = floor((y - x) / static_cast<double>(10));
        }
        cout << flr << endl;
    }

    return 0;
}