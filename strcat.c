#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* arr1, char* arr2)
{
    assert(arr1 != NULL);
    assert(arr2 != NULL);   //assert(arr1&&arr2);
    char* ret = arr1;
    //先找到arr1中的\0;
    while (*arr1)
        arr1++;
    //追加,和cpy一样
    while (*arr1++ = *arr2++);
    return ret;
}
int main()
{
    char arr1[30] = "hello";
    char arr2[] = "world";
    my_strcat(arr1, arr2);
    printf("%s", arr1);
	return 0;
}