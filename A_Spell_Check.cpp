#include <bits/stdc++.h>
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
        sort(s.begin(), s.end());
        string res = "Timur";
        sort(res.begin(), res.end());
        if (s == res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}