#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        int min = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            if (min > abs(a[i] - a[i + 1]))
            {
                min = abs(a[i] - a[i + 1]);
            }
        }
        cout << min << endl;
    }
    return 0;
}
