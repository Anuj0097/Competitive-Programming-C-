#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, a, b, c;
        cin >> s >> a >> b >> c;
        if (a <= (s + c) && (s + c) <= b)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}