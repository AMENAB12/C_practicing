#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 2; i <= 5; i++)
	{
		printf("this is the STARTING of outer loop %d\n", i);
			for (j = 0; j <= 4; j++)
			{
				printf("Inner loop with number %d\n", j);
			}
			printf("this is the ENDING of the outer loop %d\n", i);
	}


	return (0);

}
