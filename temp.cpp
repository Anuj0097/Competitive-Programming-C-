#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        temp = ar[i] + ar[n];
    }
    cout << temp << endl;
}
