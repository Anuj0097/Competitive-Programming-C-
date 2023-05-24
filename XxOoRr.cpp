#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int ans;
    int n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<int> a(n);
        for (int &i : a)
        {
            cin >> i;
        }
        vector<int> nsetbit(31);
        int count = 0;
        int term;
        for (int bit = 0; bit <= 30; bit++)
        {
            count = 0;
            for (int &i : a)
            {
                if (i % 2 != 0)
                {
                    count++;
                }
                i /= 2;
            }
            nsetbit[bit] = count;
        }
        ans = 0;
        for (int bit = 0; bit <= 30; bit++)
        {
            if (nsetbit[bit] % k == 0)
            {
                ans += nsetbit[bit] / k;
            }
            else
            {
                ans += nsetbit[bit] / k + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}