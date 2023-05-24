
#include <bits/stdc++.h>
using namespace std;
void findMissing(int arr1[], int arr2[], int M,
				 int N)
{
	if (M != N - 1 && N != M - 1)
	{
		cout << "Invalid Input";
		return;
	}

	// Do XOR of all element
	int res = 0;
	for (int i = 0; i < M; i++)
		res = res ^ arr1[i];
	for (int i = 0; i < N; i++)
		res = res ^ arr2[i];

	cout << "Missing element is " << res;
}

// Driver Code
int main()
{
	int arr1[] = {4, 1, 5, 9, 7};
	int arr2[] = {7, 5, 9, 4};

	int M = sizeof(arr1) / sizeof(int);
	int N = sizeof(arr2) / sizeof(int);

	findMissing(arr1, arr2, M, N);

	return 0;
}
