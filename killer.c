#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����Ϊ4���ӷ�����:
//A˵:������
//B˵ : ��C
//C˵ : ��D
//D˵ : C�ں�˵
//��֪3����˵���滰, 1����˵���Ǽٻ�
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