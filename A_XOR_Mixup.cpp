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
        vector<int> ar(n);
        for (int i = 0; i < n; i++)

            cin >> ar[i];

        for (int i = 0; i < n; i++)
        {

            int *x = &ar[i];
            int ans = 0;
            for (int j = 0; j < n; j++)
            {
                if (&ar[j] != x)
                    ans ^= ar[j];
            }
            if (ar[i] == ans)
            {
                cout << ar[i] << endl;
                break;
            }
        }
    }
    return 0;
}