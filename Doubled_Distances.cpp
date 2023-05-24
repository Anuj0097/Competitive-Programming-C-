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
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        bool f = true;
        sort(array, array + n);
        for (int i = 1; i < n - 1; i++)
        {
            int d1 = array[i] - array[i - 1];
            int d2 = array[i + 1] - array[i];
            if (2 * d1 != d2 &&  d1 != 2 * d2)
            {
                f = false;
                break;
            }
        }
        if (f)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}