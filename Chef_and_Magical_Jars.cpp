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
        long long int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ans += x - 1;
        }
        cout << (ans + 1) << endl;
    }
    return 0;
}
