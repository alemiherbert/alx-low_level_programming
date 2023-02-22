#include <stdio.h>



int main(void)
{
	int i;
	unsigned long j, k, res;
	
	j = 0;
	k = 1;
	for (i = 0; i < 50; i++)
	{
		res = j + k;
		printf("%lu", res);
		j = k;
		k = res;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
