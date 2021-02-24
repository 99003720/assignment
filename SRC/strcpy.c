#include "string.h"

int string_copy()
{
 char a[15]= "STRING1";
 char b[15] = "STRING2";
 //printf("Before copying\n");
 //printf("String 1: %s \n", a);
 //printf("String 2: %s \n\n",b);
 
 strcpy(a,b);                         // calling strcpy function
 printf("\nAfter copying\n");
 printf("String 1: %s \n", a);
 printf("String 2: %s \n", b);

 return 0;
}