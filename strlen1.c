#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* str)
{
    int count = 0;
    assert(str != NULL);
    while (*str)    //*str!='\0'
    {
        count++;
        str++;    //地址++,不能解引用    
    }
    return count;
}
int main()
{
    char arr[] = "abcdef";
    int len = my_strlen(arr);
    printf("%d\n", len);
    return 0;
}