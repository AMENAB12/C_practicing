#include <stdio.h>

int  addnum(int num1, int num2)
{
	int result = num1 + num2;
	return (result);
}

int main(void)
{
	int res = addnum(10, 5);
	printf("Result is: %d\n", res);
	return (0);
}
