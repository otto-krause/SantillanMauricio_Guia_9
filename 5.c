#include<stdio.h>
#include<stdlib.h>

int main()
{
	int base, exp, cont=1, pot=1;
	printf("ingrese el numero base\n");
	scanf("%d",&base);
	printf("ingrese el exponente\n");
	scanf("%d",&exp);
	while(cont<=exp)
	{
		pot=pot*base;
		cont=cont+1;
		printf("la potencia es %d",pot);
	}
	printf("la potencia es %d",pot);
}

