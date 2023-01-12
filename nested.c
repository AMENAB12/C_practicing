/**nested loop practice*/
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
#include <stdio.h>

int main() {
    int n1,n2,n3;
    
    // Write C code here
    printf("enter the number value: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    
    if (n1 > n2){
        if (n1 > n3){
            printf("%d is greate " , n1);
        } else {
            printf("%d is greater", n3);
        } 
        } else {
        if (n2 > n3){
            printf("%d is greaterd " , n2);
        } else {
            printf("%d is greaters", n3);
        }
    return 0;
}
}