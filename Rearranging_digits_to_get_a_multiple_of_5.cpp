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
        string ar;
        cin >> ar;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == '0' || ar[i] == '5')
            {
                flag = true;
            }
        }
        if (flag == false)
            cout << "No" << endl;
        else
            cout << "Yes";
        cout << endl;
    }
    return 0;
}
