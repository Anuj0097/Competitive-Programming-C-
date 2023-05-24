#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string j, s;
        cin >> j >> s;
        map<char, int> mp;
        for (int i = 0; i < j.length(); i++)
        {
            mp[j[i]] = 1;
        }
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (mp[s[i]] == 1)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
