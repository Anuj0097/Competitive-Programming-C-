// import java.util.Scanner;

// class codechef{
// public static void main(String[] args)
// {
//     Scanner sc=new Scanner(System.in);
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, stno;
        cin >> n;
        for (int m = 0; m < n; m++)
        {
            int sum = 0, diff, i;
            cin >> stno;
            int a[stno], b[stno];
            a[0] = 0;
            b[0] = 0;
            for (int i = 1; i < stno; i++)
            {
                cin >> a[i];
                sum += a[i];
                b[i] = a[i];
                a[i] = sum;
            }
            for (int i = 0; i < stno - 1; i++)
            {
                diff = a[i + 1] - b[i];
                if (diff > 0)
                {
                    b[i + 1] = b[i] + diff + b[i + 1];
                }
                else
                {
                    b[i + 1] = b[i] + b[i + 1];
                }
            }
            cout << b[i] << endl;
        }
        return 0;
    }
}
