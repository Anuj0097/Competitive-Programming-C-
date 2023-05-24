#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 8, day;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> day;
            if ((day - 6) % 7 && (day - 7) % 7)
                sum++;
        }
        cout << sum << endl;
    }
    return 0;
}