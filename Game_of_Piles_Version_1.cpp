#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pii;
// typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
// typedef vector<vi> vvi;
// typedef vector<pii> vii;
// typedef vector<LL> vl;
// typedef vector<vl> vvl;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, ds = 0;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            v.push_back(x);
            ds += x;
        }
        if (find(v.begin(), v.end(), 1) != v.end() || ds % 2)
            cout << "CHEF" << endl;
        else
            cout << "CHEFINA" << endl;
    }
    return 0;
}