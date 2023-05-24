#include <bits/stdc++.h>
#define fast
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int temp = n * x;
        if (temp % 4 == 0)
            temp = temp / 4;
        else
            temp = temp / 4 + 1;
        cout << temp << endl;
    }
    return 0;
}