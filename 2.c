#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num=1, cont=1, mayor=0;
	float prom=0;
	while(cont<=15)
	{
		printf("ingrese el numero %d\n",cont);
		scanf("%d",&num);
		if (num>mayor)
		{
			mayor=num;
		}
		prom=prom+num;
		cont=cont+1;
	}
	prom=prom/(cont-1);
	printf("el mayor numero es %d, el promedio es %f",mayor,prom);
}
