#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, num2, fac=1;
	printf("ingrese el numero\n");
	scanf("%d",&num);
	num2=num;
	while(num2>=1)
	{
		fac=num2*fac;
		num2=num2-1;
	}
	printf("el factorial de %d es %d",num,fac);
}

