#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        int sum = 0;
        cin >> n;

        while (n > 0)
        {

            sum = sum + n % 10;
            n = n / 10;
        }
        cout << sum << endl;
    }
    return 0;
}