#include <stdio.h>

void addNumber(int number, int number2)
{
	int addNumber = number + number2;

	printf("The addition  of %d and %d is %d,", number, number2, addNumber);
}

int main(void)
{
	addNumber(8, 9);

	
	return (0);
}

