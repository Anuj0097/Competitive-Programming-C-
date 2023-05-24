#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n = pow(0.143 * n, n);
        cout << ceil(n) << endl;
    }
    return 0;
}