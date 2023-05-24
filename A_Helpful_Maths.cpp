#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        cin >> s[i];
        sort(s.begin(), s.end());
        cout << "+" << s[i];
    }
    return 0;
}