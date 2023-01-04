#include <stdio.h>

int result;
int result2 = 50;

int  addnum(int num1, int num2)
{
	result = num1 + num2;
	return (result);
}

int main(void)
{
	int res = addnum(10, 5);
	printf("Result is: %d and Result2 id: %d\n", res,result2);
	return (0);
}
