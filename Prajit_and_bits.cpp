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
        int count = 0;
        for (int x = 1; x <= n; x = x << 1)
            if ((n & 1) == 0)
            {
                count++;
            }
        cout << count << endl;
    }
    return 0;
}