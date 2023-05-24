#include <bits/stdc++.h>
#define fast
using namespace std;
void anuj()
{
    int n, i, rtc = 0;
    cin >> n;
    char s[n];
    cin >> s;
    for (i = 0; i < n; i++)
    {
        rtc++;
        if (s[i + 1] == '1')
            break;
    }
    cout << rtc << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        anuj();
    }
    return 0;
}