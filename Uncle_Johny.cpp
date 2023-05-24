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
        vector<int> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        int target;
        cin >> target;
        int num = a[target - 1];
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (a[i] == num)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}