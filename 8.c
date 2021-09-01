#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, cont=1, pos=0, neg=0, cero=0;
	while(cont<=10)
	{
		printf("introduzca el numero %d\n",cont);
		scanf("%d",&num);
		if (num<0)
		{
			neg=neg+1;
		}
		else
		{
			if (num>0)
			{
				pos=pos+1;
			}
			else
			{
				cero=cero+1;
			}
		}
		cont=cont+1;
	}
	printf("numeros positivos: %d\nnumeros negativos: %d\nnumeros iguales a cero: %d",pos,neg,cero);
}

