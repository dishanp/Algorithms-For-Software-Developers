#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int difference(int arr[MAX][MAX], int n)
{
	// Initialize sums of diagonals
	int d1 = 0, d2 = 0;

	for (int i = 0; i < n; i++)
	{
		d1 += arr[i][i];
		d2 += arr[i][n-i-1];
	}


	// Absolute difference of the sums
	// across the diagonals
	return abs(d1 - d2);
}

int main()
{
	int n ;//COnsidering Diagonals only for Square Matrix
	cout<<"Enter the no.of columns";
	cin>>n;

	int arr[MAX][MAX];
	for(int i=0 ;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>arr[i][j];

	cout <<"The Diffrence is"<<difference(arr, n);
return 0;

}
