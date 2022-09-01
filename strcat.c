#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* arr1, char* arr2)
{
    assert(arr1 != NULL);
    assert(arr2 != NULL);   //assert(arr1&&arr2);
    char* ret = arr1;
    //先求出arr1里面\0的位置
    while (*arr1)
        arr1++;
    //追加,采用cpy一样的写法
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
