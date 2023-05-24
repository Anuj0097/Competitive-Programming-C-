#include <bits/stdc++.h>
using namespace std;
#define double long double
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int mod = 1000000007;
const int N = 1e6;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        bool zero = false;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num < 0)
                ans++;
            if (num == 0)
                zero = true;
        }
        if (zero || ans % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}