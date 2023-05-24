#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n{0};
    cin >> n;
    int count{0};
    while (n--)
    {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        int a = pow((x1 - x2), 2) + pow((y1 - y2), 2);
        int b = pow((x2 - x3), 2) + pow((y2 - y3), 2);
        int c = pow((x3 - x1), 2) + pow((y3 - y1), 2);
        if (a == b + c || b == a + c || c == a + b)
            count++;
    }
    cout << count << endl;
    return 0;
}