#include <bits/stdc++.h>
using namespace std;
int main()
{

  int a, b;
  cin >> a >> b;

  int sum = a - b;

  int temp = sum % 10;

  if (temp < 9)
  {
    sum = sum + 1;
  }
  else
  {
    sum = sum - 1;
  }

  cout << sum << endl;

  return 0;
}
