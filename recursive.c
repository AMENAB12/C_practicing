/**Sum of all natural numbers*/

// #include <stdio.h>

// int sum(int n);

// int main(){
// int number, result;
// printf("please Enter a positive number only : ");
// scanf("%d", &number);

// result = sum(number);

// printf("Sum = %d", result);
//     return  0;
// }
// int sum(int n){
//     //function sum is calling it self
//     if (n != 0){
//       return n + sum(n - 1);  
//     } else {
//         return n;
//     }
// }
/** Fibonacci Series*/
#include <stdio.h>

int fibo(int n);

int main(){
    int n = 8;
    
    printf("Fibonacci sequence of %d is : ", n);

for(int i = 0; i < n; i++){
    printf("%d ", fibo(i));
}

}

int fibo(int n) {
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else {
        return (fibo(n - 1)+ fibo(n - 2));
    }
}
