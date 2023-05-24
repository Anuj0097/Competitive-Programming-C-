#include <bits/stdc++.h>
using namespace std;
int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    return x * power(x, y / 2) * power(x, y / 2);
}

int order(int x)
{
    int n = 0;
    while (x)
    {
        n++;
        x = x / 10;
    }
    return n;
}

bool ArmstrongNumber(int x)
{

    int n = order(x);
    int count = 0;
    int temp = x;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int sumofpower = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumofpower += pow(digit, count);
        n /= 10;
    }

    return (sumofpower == x);
}

int main()
{

    int n1 = 153;

    if (ArmstrongNumber(n1))
    {
        cout << "Yes,it is armstrong number";
    }
    else
    {
        cout << "No,it is not armstrong number";
    }
    return 0;
}