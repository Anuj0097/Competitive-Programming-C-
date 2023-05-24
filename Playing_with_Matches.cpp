#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int ar[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int res = a + b;
        int cnt = 0;
        while (res > 0)
        {
            int rem = res % 10;
            cnt += ar[rem];
            res = res / 10;
        }
        cout << cnt << endl;
    }
    return 0;
}
