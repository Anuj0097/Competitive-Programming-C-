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
        if ((abs(x - y) & 1))
        {
            cout << abs(x - y) / 2 + 1 << endl;
        }
        else
            cout << abs(x - y) / 2 << endl;
    }
    return 0;
}
