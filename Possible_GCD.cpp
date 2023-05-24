#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long int n, A, B, cnt = 0;
        cin >> A >> B;
        n = abs(A - B);
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (n / i == i)
                {

                    cnt += 1;
                }
                else
                {
                    cnt += 2;
                }
            }
        }
        cout << cnt << endl;
        return 0;
    }
}