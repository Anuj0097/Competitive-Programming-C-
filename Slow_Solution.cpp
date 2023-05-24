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
        int a, b, c, d, e, q;
        cin >> a >> b >> c;
        if ((a * b) <= c)
        {
            d = (b * b) * a;
            cout << d << endl;
        }
        else
        {
            if (c % b == 0)
            {
                d = c / b;
                e = d * (b * b);
                cout << e << endl;
            }
            else
            {
                d = c / b;
                e = c % b;
                q = (d * (b * b)) + (e * e);
                cout << q << endl;
            }
        }
    }
    return 0;
}