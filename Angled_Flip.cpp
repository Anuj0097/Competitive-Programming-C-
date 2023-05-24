#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int x, y;
        cin >> x >> y;
        if (x < y)
        {
            x = 0;
            y = y - x;
            if (y >= 2)
            {
                cout << "Chefina" << endl;
            }
        }
        else if (y < x)
        {
            x = x - y;
            y = 0;
            if (x >= 2)
            {
                cout << "Chef" << endl;
            }
        }
        else
        {

            if (x % 2)
                cout << "Chef" << endl;
            else
                cout << "Chefina" << endl;
        }
    }
    return 0;
}