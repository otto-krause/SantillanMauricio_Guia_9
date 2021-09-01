#include<stdio.h>
#include<stdlib.h>

int main()
{
	int vend=1, venta, totalgen=0, mayor=0, mayorven=0;
	while(vend<=20)
	{
		printf("ingrese las ventas diarias del vendedor %d\n",vend);
		scanf("%d",&venta);
		venta=venta*15;
		if (mayor<venta)
		{
			mayor=venta;
			mayorven=vend;
		}
		totalgen=totalgen+venta;
		printf("el total vendido es %d\n\n",venta);
		vend=vend+1;
	}
	printf("el total general de todos los vendedores es de %d ventas\n",totalgen);
	printf("el vendedor con mas ventas es el vendedor %d con %d ventas",mayorven,mayor);
}

