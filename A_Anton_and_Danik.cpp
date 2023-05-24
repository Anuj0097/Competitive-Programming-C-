#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ak = 0, dk = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == 'A')
            ak++;
        else
            dk++;
    if (ak > dk)
        cout << "Anton" << endl;

    if (dk > ak)
        cout << "Danik" << endl;
    if (ak == dk)
        cout << "Friendship" << endl;

    return 0;
}