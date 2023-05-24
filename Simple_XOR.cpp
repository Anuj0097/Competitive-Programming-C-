#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long int l, r;
        cin >> l >> r;

        if ((l) % 2 != 0 && (l + 4 > r))
            cout << "-1" << endl;
        else
        {
            if (l % 2 == 0)
                cout << l << " " << l + 1 << " " << l + 2 << " " << l + 3 << endl;

            else
                cout << l + 1 << " " << l + 2 << " " << l + 3 << " " << l + 4 << endl;
        }
    }

    return 0;
}
