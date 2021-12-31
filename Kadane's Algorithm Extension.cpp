#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int res=INT_MIN;
    int sum=0;
	int start =0, end = 0, s=0;

	for (int i=0; i< size; i++ )
	{
		sum += a[i];

		if (res < sum)
		{
			res = sum;
			start = s;
			end = i;
		}

		if (sum < 0)
		{
			sum = 0;
			s = i + 1;
		}
	}
	cout << "Maximum contiguous sum is "
		<< res << endl;
	cout << "Starting index "<< start
		<< endl << "Ending index "<< end << endl;
}

int main()
{
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = maxSubArraySum(a, n);
	return 0;
}
