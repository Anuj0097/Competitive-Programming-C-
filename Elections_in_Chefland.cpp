#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int aa, bb, cc;
        cin >> aa >> bb >> cc;
        if (aa > 50)
            cout << "A" << endl;
        else if (bb > 50)
            cout << "B" << endl;
        else if (cc > 50)
            cout << "C" << endl;
        else
            cout << "NOTA" << endl;
    }
    return 0;
}