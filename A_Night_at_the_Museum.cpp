#include <bits/stdc++.h>
using namespace std;
int main()
{

    char a[1002];
    cin >> a;
    int l = strlen(a);
    char ans = 'a';
    int sum = 0;
    for (int i = 0; i < l; i++)
    {
        if (abs(a[i] - ans) > 12)
        {
            sum += (26 - abs(a[i] - ans));
        }
        else

        {
            sum += abs(a[i] - ans);
        }
        ans = a[i];
    }
    cout << sum << endl;

    return 0;
}