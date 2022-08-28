#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//以下为4个嫌犯供词:
//A说:不是我
//B说 : 是C
//C说 : 是D
//D说 : C在胡说
//已知3个人说了真话, 1个人说的是假话
int main()
{
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("killer=%c\n", killer);
		}
	}
	return 0;
}