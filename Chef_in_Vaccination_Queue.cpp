#include "bits/stdc++.h"
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sw = 2 * n;
        int a[sw];
        for (int i = 0; i < sw; i++)
        {
            cin >> a[i];
        }
        vector<ll> rit1;
        vector<ll> rit2;
        for (int i = 0; i < sw; i++)
        {
            if (a[i] > sw / 2 and i < sw / 2)
            {
                rit1.push_back(i + 1);
            }
            if (a[i] <= sw / 2 and i >= sw / 2)
            {
                rit2.push_back(i + 1);
            }
        }
        long long int hq = 0;
        for (int i = 0; i < rit1.size(); i++)
        {
            hq += abs(rit1[i] - rit2[i]);
        }
        cout << hq << endl;
    }
    return 0;
}
