#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> v1;
        vector<long long int> v2;
        long long int odd1 = 0, odd2 = 0;
        for (int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            v1.push_back(x);
            if (x & 1)
            {
                odd1++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            long long int y;
            cin >> y;
            v2.push_back(y);
            if (y & 1)
            {
                odd2++;
            }
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        long long int res = 0;
        for (int i = 0; i < n; i++)
        {
            res += (v1[i] + v2[i]);
        }
        cout << (res - abs(odd1 - odd2)) / 2 << endl;
    }
    return 0;
}