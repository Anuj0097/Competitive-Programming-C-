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
        int x, y;
        cin >> x >> y;
        if (x < y)
            cout << "REPAIR" << endl;
        else if (y < x)
            cout << "NEW PHONE" << endl;
        else
            cout << "ANY" << endl;
    }
    return 0;
}