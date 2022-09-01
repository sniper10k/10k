#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* arr1, const char* arr2)
{
    assert(arr1 != NULL);
    assert(arr2 != NULL);
    char* ret = arr1;    //选取arr1的地址,最后返回地址,所以用char*接收
    while (*arr1++ = *arr2++);
    //while(*arr2=='\0')
    //    *arr1=*arr2;
    //    arr1++;
    //    arr2++;        
    return ret;
}
int main()
{
    char arr1[] = "abcdefghi";
    char arr2[] = "bit";
    my_strcpy(arr1, arr2);
    printf("%s", arr1);
    return 0;
}