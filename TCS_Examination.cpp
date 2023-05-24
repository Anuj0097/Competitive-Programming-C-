#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int dsa1, toc1, dm1, dsa2, toc2, dm2, sum1, sum2;
        cin >> dsa1 >> toc1 >> dm1 >> dsa2 >> toc2 >> dm2;
        sum1 = dsa1 + toc1 + dm1;
        sum2 = dsa2 + toc2 + dm2;
        if (sum1 > sum2)
            cout << "DRAGON" << endl;
        else if (sum1 < sum2)
            cout << "SLOTH" << endl;
        else
        {
            if (dsa1 > dsa2)
                cout << "DRAGON" << endl;
            else if (dsa1 < dsa2)
                cout << "SLOTH" << endl;
            else
            {
                if (toc1 > toc2)
                    cout << "DRAGON" << endl;
                else if (toc1 < toc2)
                    cout << "SLOTH" << endl;
                else
                    cout << "TIE" << endl;
            }
        }
    }
    return 0;
}