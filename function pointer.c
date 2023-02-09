//Online C compiler to run C program online
// #include <stdio.h>
// void add (int a, int b)
// {
//     printf("add  = %d\n", a + b);
// }
// void sub (int a, int b)
// {
//     printf("sub  = %d\n", a - b);
// }
// void mult (int a, int b)
// {
//     printf("mult  = %d\n", a * b);
// }
// void div (int a, int b)
// {
//     printf("div  = %d\n", a / b);
// }

// int main()
// {
//     int ch,a,b;
//     printf("o for add\n 1 for sub\n 2 for mult\n 3 for div:\n");
    
//     printf("enter choice: ");
//     scanf("%d", &ch);
//     printf("enter two number:");
//     scanf("%d%d", &a,&b);
    
//     switch(ch)
//     {
//         case 0: add(a,b);break;
//         case 1: sub(a,b);break;
//         case 2: mult(a,b);break;
//         case 3: div(a,b);break;
        
        
//     }
    
    
// }




#include <stdio.h>
void add (int a, int b)
{
    printf("add  = %d\n", a + b);
}
void sub (int a, int b)
{
    printf("sub  = %d\n", a - b);
}
void mult (int a, int b)
{
    printf("mult  = %d\n", a * b);
}
void div (int a, int b)
{
    printf("div  = %d\n", a / b);
}

int main()
{
    int ch,a,b;
    
int(*fptr[10])(int,int) = {add,sub,mult,div};
    
    printf("o for add\n 1 for sub\n 2 for mult\n 3 for div:\n");
    
    printf("enter choice: ");
    scanf("%d", &ch);
    printf("enter two number:");
    scanf("%d%d", &a,&b);
    
    (*fptr[ch])(a,b);
    
    
}