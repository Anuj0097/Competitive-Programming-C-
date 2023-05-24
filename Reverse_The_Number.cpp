#include <iostream>
using namespace std;

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        int rev = 0;
        while (N > 0)
        {
            int rem = N % 10;
            rev = rev * 10 + rem;
            N = N / 10;
        }

        printf("%d\n", rev);
    }
    return 0;
}