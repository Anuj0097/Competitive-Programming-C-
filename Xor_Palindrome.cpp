#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, er = 0;
        cin >> n;
        string str;
        cin >> str;
        for (int i = 0; i < n / 2; i++)
        {
            if (str[i] != str[n - 1 - i])
            {
                er += 1;
            }
        }
        int ans = 0;
        if (er % 2 == 0)
        {
            ans = er / 2;
        }
        else
        {
            ans = er / 2 + 1;
        }
        cout << ans << endl;
    }
    return 0;
}
// Anuj Code