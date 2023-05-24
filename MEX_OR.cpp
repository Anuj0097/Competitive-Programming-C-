#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nyt;
        cin >> nyt;
        if (nyt == 0)
            cout << "1" << endl;
        if (nyt == 1 || nyt == 2)
            cout << "2" << endl;
        else
        {
            int sum = 1;
            while (2 * sum <= nyt)
                sum *= 2;
            if (sum == nyt)
                cout << nyt << endl;
            else if (nyt == (2 * sum - 1))
                cout << nyt - 1 << endl;
            else
                cout << sum << endl;
        }
    }
    return 0;
}