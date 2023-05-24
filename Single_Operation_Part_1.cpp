#include <bits/stdc++.h>
// #define fast
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int vlv = 0;
        int cont = 1;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                vlv += pow(2, cont);
            }
            cont++;
        }
        int mxx = INT_MIN;
        int r = 0;
        for (int i = 1; i < s.length(); i++)
        {
            int temp = (vlv / (pow(2, i)));
            temp = vlv ^ temp;
            if (temp > mxx)
            {
                mxx = temp;
                r = i;
            }
        }
        cout << r << endl;
    }
    return 0;
}
