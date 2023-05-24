#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, r;
        cin >> n;
        int x = n % 10;
        while (n > 0)
        {
            r = n % 10;
            n = n / 10;
        }
        cout << x + r << endl;
    }
    return 0;
}