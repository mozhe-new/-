#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void _quick_sort(int arr[], int low, int hight);
void quick_sort(int arr[], int size)//入口函数
{
	_quick_sort(arr,0,size-1);
}
void _quick_sort(int arr[], int low, int hight)
{
	if (low >= hight)//基线条件
	{
		return;
	}
	//确定基准值
	int t = arr[low];//默认第一个
	int f = low + 1;
	int b = hight;
	//准备数据交换工具
	int temp;
	//正式排序
	while (f <= b)
	{
		//游标f一直找到比基准值大的元素为止
		while (f <= b && arr[f] <= t) f++;
		//游标b一直找到比基准值小的元素为止
		while (f <= b && arr[b] >= t) b--;
		//两个都停了
		if (f < b)
		{
			temp = arr[f];
			arr[f] = arr[b];
			arr[b] = temp;
			f++; b--;
		}
	}
	//到这一步完成了分区
	//基准值交换
	arr[low] = arr[b];
	arr[b] = t;
	//递归小区间
	_quick_sort(arr, low, b - 1);
	//递归大区间
	_quick_sort(arr, b + 1, hight);
}