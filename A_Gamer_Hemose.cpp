#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, h, a[n], count = 0;
        cin >> n >> h;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            a[i] = a[i] - h;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}