#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p1, p2, q1, q2;
        cin >> p1 >> p2 >> q1 >> q2;
        int a = max(p1, p2);
        int b = max(q1, q2);
        if (a < b)
        {
            cout << "P" << endl;
        }
        else if (a > b)
        {
            cout << "Q" << endl;
        }
        else
        {
            cout << "TIE" << endl;
        }
    }
    return 0;
}