#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        vector<int> prefixgcd(n);
        prefixgcd[0] = v[0];
        for (int i = 1; i < n; ++i)
        {
            prefixgcd[i] = __gcd(prefixgcd[i - 1], v[i]);
        }
        vector<int> suffixgcd(n);
        suffixgcd[n - 1] = v[n - 1];
        for (int i = n - 2; i >= 0; --i)
        {
            suffixgcd[i] = __gcd(suffixgcd[i + 1], v[i]);
        }
        int sele = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i == 0 && suffixgcd[1] > 1)
            {
                sele++;
            }
            else if (i == n - 1 && prefixgcd[n - 2] > 1)
            {
                sele++;
            }
            else if (__gcd(prefixgcd[i - 1], suffixgcd[i + 1]) > 1)
            {
                sele++;
            }
        }
        cout << sele << endl;
    }
    return 0;
}