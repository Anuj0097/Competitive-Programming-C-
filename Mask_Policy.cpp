#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;

        int d = (n - a);
        cout << min(a, d) << endl;
        // if (d > a)
        //     cout << a << endl;
        // else if (a > d)
        //     cout << d << endl;
        // else
        //     cout << a << endl;
    }
    return 0;
}