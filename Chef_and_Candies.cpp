#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        int n, x;
        cin >> n >> x;
        int d = n - x;
        if (d <= 0)
            cout << "0" << endl;
        else if (d % 4 == 0)
            cout << d / 4 << endl;
        else
            cout << d / 4 + 1 << endl;
    }
    return 0;
}