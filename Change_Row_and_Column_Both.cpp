#include <bits/stdc++.h> // Include every standard library
using namespace std;

#define B begin()
#define E end()
#define I iterator
using pii = pair<int, int>;
using vi = vector<int>;
using llu = unsigned long long int;
using ll = long long int;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sx, sy, ex, ey;
        cin >> sx >> sy >> ex >> ey;
        if (sx == ex || sy == ey)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}