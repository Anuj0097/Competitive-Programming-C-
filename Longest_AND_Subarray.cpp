#include <bits/stdc++.h>
using namespace std;
int setbits(int g)
{
    int ans = 0;
    while (g > 0)
    {
        ans++;
        g = g >> 1;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int g = setbits(N);
        int ans1 = N - pow(2, g - 1) + 1;
        int ans2 = pow(2, g - 1) - pow(2, g - 2);
        cout << max(ans1, ans2) << endl;
    }
}