#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int array[n];

        for (int i = 0; i < n; i++)
            cin >> array[i];
        int max = *max_element(array, array + n);
        int min = *min_element(array, array + n);
        cout << max - min << endl;
    }
    return 0;
}
