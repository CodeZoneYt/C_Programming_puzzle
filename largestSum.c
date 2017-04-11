/*largest sum of sub array*/
#include <stdio.h>

int largestMax(int a[], int n)
	{
	int max_now, max_end, i;
	max_now = max_end=0;
	
	for(i=0; i<n; i++)
		{
		max_now = max_now + a[i];
		if(max_now < 0)
		max_now =0;
		
		if(max_now > max_end)
		max_end = max_now;
		}
	return max_end;
	}

int main()
{
//int a[10]= {12, 20, 3, -14, 5, 30 ,42 ,4, -90, 7};
int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
int result= largestMax(a, 8);

printf ("\nmax sum : %d ", result);
return 0;
}