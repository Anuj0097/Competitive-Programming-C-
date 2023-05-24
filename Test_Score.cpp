#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (y == 1)
            cout << x << endl;
        else if (x > y)
            cout << x / 2 << endl;
        else
            cout << x << endl;
    }
    return 0;
}
