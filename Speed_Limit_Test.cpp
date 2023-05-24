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
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        float p = (float)a / x;
        float q = (float)b / y;

        if (p == q)
            cout << "Equal" << endl;
        else if (p > q)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}
