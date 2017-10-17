#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int height;
	int lower;
	int upper;
	int step;
	double weight;

	printf("從多少cm?:");
	scanf("%d", &lower);
	printf("到多少cm?:");
	scanf("%d", &upper);
	printf("每隔多少cm?:");
	scanf("%d", &step);

	for (height = lower; height <= upper; height += step)
	{
		weight = (height - 100)*0.9;
		printf("%dcm %.2fkg\n", height, weight);
	}

	system("pause");
	return 0;
}