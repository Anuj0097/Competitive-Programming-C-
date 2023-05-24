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
    int t;
    cin >> t;
    while (t--)
    {

        long long int n, i, k = 0;
        cin >> n;
        int ar[n];
        k = n;
        ar[n - 1] = n;
        // for (int i = 1; i < n; i++)
        // {
        //     cin >> ar[i];
        // }
        for (i = 1; i < n; i++)
        {
            if (i % 2 != 0)
            {
                ar[n - 1 - i] = k - (n - i);
                k = ar[n - 1 - i];
            }
            else // if (i % 2 == 0)
            {
                ar[n - 1 - i] = k + (n - i);
                k = ar[n - 1 - i];
            }
        }
        for (i = 0; i < n; i++)
        {
            cout << ar[i] << " ";
        }
        cout << endl;
    }
    return 0;
}