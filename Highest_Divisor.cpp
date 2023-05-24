#include <iostream>
using namespace std;

int main()
{
    int n, i, max = 1;
    cin >> n;
    for (i = 1; i <= 10; i++)
    {
        if (n % i == 0 && max < i)
        {
            max = i;
        }
    }
    cout << max;
    return 0;
}
