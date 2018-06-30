/**
*同样是枚举法，java运行快过python，c语言快过java
*/
#include <stdio.h>
int main()
{
	int i, j, t;
	for(i = 1; i <= 1000; i++)
	{
		for(j = 1; j <= 1000; j++)
		{
			for(t = 1; t <= 1000; t++)
			{
				if((i + j + t == 1000) && (i*i + j*j == t*t))
					printf("i=%d\tj=%d\tt=%d\n",i,j,t);
			}
		}
	}
	printf("完成啦\n");
}
