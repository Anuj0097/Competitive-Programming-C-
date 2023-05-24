#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        bool poss = true;
        for (int i = 0; i < n; i = i + 2)
        {
            if (s[i] == s[i + 1])
            {
                poss = false;
                break;
            }
        }
        if (poss)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}