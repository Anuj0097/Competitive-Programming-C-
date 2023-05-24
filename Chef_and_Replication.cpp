#include "bits/stdc++.h"
#include "iostream"
using namespace std;
#define int long long

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            if (freq.find(arr[i]) == freq.end())
                freq.insert({arr[i], 1});
            else
                freq[arr[i]]++;
        }

        int result = 0;
        bool flag = false;
        for (auto i : freq)
        {
            if (i.second == k)
            {
                result += i.first;
                flag = true;
            }
        }
        if (!flag)
            cout << -1 << endl;
        else
            cout << result << endl;
    }
    return 0;
}
