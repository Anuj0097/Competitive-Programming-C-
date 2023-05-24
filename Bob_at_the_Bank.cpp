#include <bits/stdc++.h>
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
        int w, x, y, z;
        cin >> w >> x >> y >> z;

        if (x > y)
            cout << w + (x - y) * z << endl;
        else
            cout << w - (y - x) * z << endl;
    }
    return 0;
}
