#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//5个人跳水, 预测结果
//A说 : B第二, 我第三
//B说 : 我第二, E第四
//C说 : 我第一, D第二
//D说 : C最后, 我第三
//E说 : 我第四, A第一
//比赛结束, 每个人都说对了一半
//从a=1...5一直推断,所以需要5次循环,bcde也是
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						//判断条件,当两句话里有一个为真时,也就是==1时,5个条件都同时符合,才是对的
						if (((b == 2) + (a == 3) == 1) &&
							((b == 2) + (e == 4) == 1) &&
							((c == 1) + (d == 2) == 1) &&
							((c == 5) + (d == 3) == 1) &&
							((e == 4) + (a == 1) == 1))
						{
							//这里给的排序必须保证abcde不是重复的
							if (a * b * c * d * e == 120)
							{
								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}