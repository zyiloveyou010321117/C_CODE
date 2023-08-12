#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void bubble_sort(int arr[],int sz)
{
	//how many times of sorts?
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int flag = 1;//suppose the array is in order.
		//how many pairs of numbers to compare in one sort?
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tem = 0;
				tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
				flag = 0;//the array is not in order
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 32,42,63,79,12,7,31,63,68,98 };
	int n = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (n = 0; n < sz; n++)
	{
		printf("%d ", arr[n]);
	}
	
	return 0;
}