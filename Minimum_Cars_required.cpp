#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 4 == 0)
            cout << n / 4 << endl;
        else
        {
            n = n / 4;
            n++;
            cout << n << endl;
        }
    }
    return 0;
}
