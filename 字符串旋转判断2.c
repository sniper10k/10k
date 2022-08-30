#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int  is_leftmove(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return 0;
	strncat(str1, str1, len1);
	char* ret = strstr(str1, str2);
	if (ret == NULL)
		return 0;
	else
		return 1;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_leftmove(arr1, arr2);
	if (ret == 1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}