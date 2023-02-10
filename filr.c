// #include <stdio.h>
// #include <stdlib.h>

// void main() {

//     // Write C code here
//    FILE *fp = NULL;
//    char ch = 'a';
   
//    fp = fopen("abc.txt", "w");
   
//    if(fp == NULL){
       
//        printf("error");
//        exit(1);
       
//    }
//    fputc(ch,fp);
   
//    fclose(fp);

// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    
    // Write C code here
   FILE *fp = NULL;
   char str[50];
   int i;
   fp = fopen("abc.txt", "w");
   
   if(fp == NULL){
       
       printf("error");
       exit(1);
       
   }

printf("enter the string:");
gets(str);

// for(i = 0; i != strlen(str);i++);

   fputc(str,fp);
   
   fclose(fp);


}