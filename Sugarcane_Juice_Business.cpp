#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x, y, i, co = 0;
        cin >> n;
        x = n * 50;
        int profit = x - (x * 0.2) - (x * 0.2) - (x * 0.3);
        cout << profit << endl;
    }
    return 0;
}