#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, n;
        cin >> a >> b >> n;
        cout << min(abs(b - a), abs(n - (abs(b - a)))) << endl;
    }
    return 0;
}