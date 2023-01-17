#include <stdio.h>

int main(void)
{
	int i = 1;
	do
	{
		printf("number %d\n", i);
		i++;
	} while (i < 1);
		return 0;
}
/** While loop*/
#include <stdio.h>

int main(){
int i = 0;
 
while ( i <= 100){
   if (i % 3 == 0){
       printf("fizz", i);
   } else if (i % 5 == 0){
       printf("buzz", i);
   }
   
    printf("%d\n", i);
    i = i + 5;
}
return 0;
}
/** Do while loop*/
#include <stdio.h>

int main(void)
{
	int i = 0;
	do
	{
		printf("number %d\n", i);
		i++;
	} while (i <= 100);
		return 0;
}
/** for loop*/
