#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ct = 0;
    for (int i = s.length() - 2; i >= 0; i--)
        if (s[i] == s[i + 1])
            ct++;
    cout << ct << endl;
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}