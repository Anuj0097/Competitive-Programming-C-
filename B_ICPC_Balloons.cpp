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
        int n;
        cin >> n;
        string s(n, 'O');
        cin >> s;
        set<char> p;
        for (int i = 0; i < s.size(); i++)
        {
            p.insert(s[i]);
        }
        int x = p.size();
        int y = s.size();
        int z = (x * 2) + (y - x);
        cout << z << endl;
    }
    return 0;
}