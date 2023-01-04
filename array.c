#include <stdio.h>


int main(void)
{

	int age[] = {52,885,67,58,8};

	for (int i = 0; i < sizeof(age) / sizeof(age[0]); i++){
		printf("%d = %p\n", *(age + i), age +i);
	}

	return (0);
}
