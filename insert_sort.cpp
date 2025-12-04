#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void insert_sort(int arr[], int len)//升序排列
{
	if (len <= 1)
	{
		return;
	}
	int temp, j;
	for (int i = 1; i < len; ++i)
	{
		temp = arr[i];
		for (j = i - 1; j > -1&&temp<arr[j]; --j)
		{
			//升序
			arr[j + 1] = arr[j];//数据的后移			
		}
		arr[j+1] = temp;
	}
}
int main()
{
	int arr[]{ 7,6,8,2,5,4,3,1 };
	insert_sort(arr, 8);
	return 0;
}