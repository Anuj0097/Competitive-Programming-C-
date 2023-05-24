#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, v = 0, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        v = v + i;
        n = n - v;
        if (n >= 0)
        {
            count++;
        }
        else
        {
            break;
        }
#
    }
    cout << count << endl;
    return 0;
}