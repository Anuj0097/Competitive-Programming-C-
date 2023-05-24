#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c1, c2;
    cin >> c1 >> c2;
    if (c1 == 'R' or c2 == 'R')
    {
        cout << 'R' << "\n";
    }
    else if (c1 == 'G')
    {
        cout << c2 << "\n";
    }
    else if (c2 == 'G' || c1 == c2)
    {
        cout << c1 << "\n";
    }
    return 0;
}