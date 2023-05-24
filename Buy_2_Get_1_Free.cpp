#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int res = n / 3;
        res = n - res;
        res = res * x;
        cout << res << endl;
    }
    return 0;
}
