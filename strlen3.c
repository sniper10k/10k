#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int my_strlen(const char* str)
{
    char* start = str;
    char* end = str;
    while (*end != '\0')
    {
        end++;
    }
    return end - start;
}
int main()
{
    char arr[] = "abcdef";
    int len = my_strlen(arr);
    printf("%d\n", len);
    return 0;
}