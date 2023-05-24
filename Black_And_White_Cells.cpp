#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s.length() % 2 == 1 && s.find('W') == s.length() / 2)
            cout << "Chef\n";
        else
            cout << "Aleksa\n";
    }
}
