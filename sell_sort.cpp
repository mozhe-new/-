#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void sell_sort(int arr[], int len)
{
	if (len <= 1)
	{
		return;
	}
	int i, j, jump, temp;
	jump = len >> 1;
	while (jump!=0)
	{
		//核心思路 插入操作
		for (i = jump; i < len; ++i)
		{
			temp = arr[i];
			for (j = i - jump; j > -1 && temp < arr[j]; j-=jump)
			{
				//升序
				arr[j + jump] = arr[j];//数据的后移			
			}
			arr[j + jump] = temp;
		}
		jump >>= 1;//除等于2
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	sell_sort(arr, 9);
	return 0;
}