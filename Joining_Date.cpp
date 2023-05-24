#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int o = (n + 4) / 5;
        int z = (k + 4) / 5;
        cout << o - z << endl;
    }
    return 0;
}
