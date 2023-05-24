#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        int k = 0;
        for (int t = 1; t <= b; t += 2)
        {
            k += pow(b - t + 1, 2);
        }
        cout << k << endl;
    }
    return 0;
}