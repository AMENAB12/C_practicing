#include <stdio.h.>

int main(void)
{
	char grade;
	printf("Please enter your grade to se remark\n");
		scanf("%c", &grade);

	switch(grade)
	{
	case 'A':
		printf("You are an excellent student");
		break;
	case 'B':
			printf("Good Student");
			break;
	case 'C':
				printf("You did well");
				break;
	default:
				printf("we do not know you");
	}
		return 0;
}
