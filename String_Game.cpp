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
        map<char, int> m;
        int tmp = 0;
        if ((s.length()) % 2 == 1)
            cout << "NO" << endl;
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                m[s[i]]++;
            }
            for (auto i : m)
            {
                if (i.second % 2)
                {
                    tmp = 1;
                    cout << "NO" << endl;
                    break;
                }
            }
            if (!tmp)
                cout << "YES" << endl;
        }
    }
    return 0;
}