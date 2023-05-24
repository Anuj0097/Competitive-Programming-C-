#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '0' && s[i - 1] == '1')
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}