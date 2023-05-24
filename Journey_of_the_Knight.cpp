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
        int x, y, x1, y1;
        cin >> x >> y >> x1 >> y1;
        int moves = abs(x - x1) + abs(y - y1);
        if ((abs(x - x1) == 1 && y == y1) || (abs(y - y1 == 1) && x == x1))
        {
            cout << "NO" << endl;
        }
        if (moves % 2 == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}