#include<iostream>
using namespace std;
#define N 13//元素量
void radix_sort(int arr[], int len = N)
{
	//准备桶子
	int temp[N][10] = {};
	int i, j, k, tempIndex;
	//循环
	for (int n = 1; n < 1000; n *= 10)//大前提
	{
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < 10; ++j)
			{
				//初始值不会是数据当中的值
				temp[i][j] = -1;
			}
		}
		//数据入桶
		for (i = 0; i < len; ++i)
		{
			tempIndex = (arr[i] / n) % 10;//下标
			temp[i][tempIndex] = arr[i];
		}
		//数据出桶
		k = 0;
		for (i = 0; i < 10; ++i)
		{
			for (j = 0; j < len; ++j)
			{
				if (temp[j][i] != -1)
				{
					arr[k] = temp[j][i];
				}
				//不要break

			}
		}
	}
}