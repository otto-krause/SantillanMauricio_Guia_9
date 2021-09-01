#include<stdio.h>
#include<stdlib.h>

int main()
{
	int alumnos=1, notas=0, contnota;
	float prom=0, promcurso=0;
	while(alumnos<=30)
	{
		printf("ingrese las 10 notas del alumno %d\n",alumnos);
		contnota=1;
		while(contnota<=10)
		{
			printf("nota %d: ",contnota);
			scanf("%d",&notas);
			prom=prom+notas;
			contnota=contnota+1;
		}
		promcurso=promcurso+prom;
		prom=prom/10;
		printf("el promedio del alumno es %f\n\n",prom);
		prom=0;
		alumnos=alumnos+1;
	}
	promcurso=promcurso/10;
	printf("el promedio del curso es %f",promcurso);
}

