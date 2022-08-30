#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

void leftmove(char arr[], int k)
{
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < k; i++)	
	{
		char tmp = arr[0];
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j+1];
		}
		arr[len-1] = tmp;
	}
}
int main()
{
	char arr[] = "abcdef";
	leftmove(arr, 2);
	printf("%s", arr);

	return 0;
}