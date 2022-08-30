#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		int tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void leftmove(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr, arr + k - 1);
	reverse(arr + k, arr + len - 1);
	reverse(arr, arr + len - 1);
}
int main()
{
	char arr[] = "abcdef";
	leftmove(arr, 2);
	printf("%s", arr);

	return 0;
}