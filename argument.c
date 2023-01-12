#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("argc = %d\n", argc);
	printf("Everything enside of argv[]\n");

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}


	return (0);
}
