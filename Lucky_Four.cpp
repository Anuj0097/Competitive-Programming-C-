#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        int count = 0;
        while (n > 0)
        {
            k = n % 10;
            n = n / 10;
            if (k == 4)
                count += 1;
            else
                continue;
        }
        cout << count << endl;
    }
    return 0;
}