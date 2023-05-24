#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int extra = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] + extra >= k)
            {
                extra = extra + a[i] - k;
            }
            else
            {
                cout << "NO " << i + 1 << endl;
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}