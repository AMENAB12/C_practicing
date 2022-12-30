#include <stdio.h>

int main(void)
{
	int age;
	printf("what is your age\n");
		scanf("%d", &age);

	if (age > 18){
		printf("you are good to go andyou can bet");
	} else if (age >= 0 && age < 18){
		printf("Sorry you can't bet");
}else if(age < 0){
	printf("Sorry you are not born yet");
} else{
	printf("Sorry,we do not know about you.");
}

return 0;
}
