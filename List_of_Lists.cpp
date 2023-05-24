#include <bits/stdc++.h>
using namespace std;
void tle_test()
{
    while (1)
        ;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> d(n);
        for (int &i : d)
            cin >> i;
        map<int, int> freq;
        for (int i : d)
            freq[i]++;
        int mxfreq = -1;
        for (auto pii : freq)
        {

            mxfreq = max(mxfreq, pii.second);
        }

        int ans = -10;
        if (n == 1 || mxfreq == n)
        {
            ans = 0;
        }

        else if (mxfreq == 1)
        {

            ans = -1;
        }

        else
        {

            ans = (n - mxfreq) + 1;
        }

        cout << ans << endl;
    }
    return 0;
}