#include <stdio.h>

int main(void)
{
int age = 50;
printf("Age is %d\n", age);
printf("Adress of age is: %p\n", &age);

int *ptr_age = &age;
printf("value of ptr_age is : %p\n", ptr_age);
printf("value stored at ptr_age is :%d\n", *ptr_age);
*ptr_age = 100;
printf("new value of age is : %d\n", age);

	return (0);
}
