#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	float population = 6763;
	float rate = 0.0118;
	float newpop = population;
	float newpop2 = population;
	int year;
	float x = 1 + rate;

	printf("%15s%30s%25s\n", "Years form now", "Population(in millions)", "Increase(in millions)");

	for (year = 1; year <= 75; year++)
	{
		newpop2 = newpop;
	
		newpop = population*x;	
		x = x*(1 + rate);
		printf("%15d%30.2f%25.2f\n", year, newpop, newpop - newpop2);
	}

	system("pause");
	return 0;
}