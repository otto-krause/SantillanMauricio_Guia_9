#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, num2;
	printf("ingrese el primer numero\n");
	scanf("%d",&num);
	printf("ingrese el segundo numero\n");
	scanf("%d",&num2);
	if (num<num2)
	{
		num=num+1;
		while (num<num2)
		{
			printf("%d ",num);
			num=num+1;
		}
	}
	else
		if (num>num2)
		{
			num=num-1;
			while (num>num2)
			{
				printf("%d ",num);
				num=num-1;
			}
		}
}
