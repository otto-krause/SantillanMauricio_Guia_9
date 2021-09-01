#include<stdio.h>
#include<stdlib.h>

int main()
{
	int personas=1, sueldo, mas=0, menos=0, igual=0;
	while (personas<=20)
	{
		printf("introduzca el sueldo de la persona %d: ",personas);
		scanf("%d",&sueldo);
		if (sueldo<2000)
		{
			menos=menos+1;
		}
		else
		{
			if (sueldo>2000)
			{
				mas=mas+1;
			}
			else
			{
				igual=igual+1;
			}
		}
	personas=personas+1;
	}
	printf("la cantidad de personas con un sueldo mayor a 2000 son: %d\nla cantidad de personas con un sueldo menor a 2000 son: %d\n",mas,menos);
	printf("la cantidad de personas con un sueldo igual a 2000 son: %d",igual);
}

