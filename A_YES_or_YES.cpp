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
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        }
        if (s[0] == 'y' && s[1] == 'e' && s[2] == 's')

            cout << "YES" << endl;

        else

            cout << "NO" << endl;
    }
    return 0;
}