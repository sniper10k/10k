#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int FindNum(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;//行
	int y = *py - 1;//列
	while (x <= *py - 1 && y >= 0)
	{
		if (arr[x][y] > k)
			y--;
		else if (arr[x][y] < k)
			x++;
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("找到了!\n");
		printf("下标为:%d %d\n", x, y);
	}
	else
		printf("没有找到!\n");
	return 0;
}