#include <bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[n];
        cin >> n;
        int idx = 0;
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != a[i + 1])
                idx = a[i];
            cout << idx << endl;
        }
    }
    return 0;
}