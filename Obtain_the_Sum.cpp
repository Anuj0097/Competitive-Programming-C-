#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n;

        lli pos = (n * (n + 1) / 2) - s;
        if (pos >= 1 && pos <= n)
            cout << pos << "\n";
        else
            cout << "-1\n";
        }
    return 0;
}